import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly
import matplotlib.image as mpimg



class Conv_module:
    def __init__(self, dut):
        self.dut = dut
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())
        self.Image = []
        self.IMAGE_HEIGHT = 0
        self.IMAGE_WIDTH = 0
        self.img_i = 0 # stores the row number top left corner of the window
        self.img_j = 0 # stores the column number top left corner of the window
        

    async def  reset(self):
        self.dut.rst.value = 1
        for _ in range(2):
            await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)

    def load_image(self, fpath):
        """
        load the image onto the object and set the IMAGE_HEIGHT
        and IMAGE_WIDTH variables
        """
        img_temp= mpimg.imread(fpath).astype(int)
        
        
        self.IMAGE_HEIGHT = len(img_temp)
        self.IMAGE_WIDTH = len(img_temp[0])

        self.Image = [[0 for _ in range(self.IMAGE_WIDTH)] for _ in range(self.IMAGE_HEIGHT)]

        for i in range(self.IMAGE_HEIGHT):
            for j in range(self.IMAGE_WIDTH):
                self.Image[i][j] = int(img_temp[i][j])

        self.output_image = [[0 for _ in range(self.IMAGE_WIDTH-2)] for _ in range(self.IMAGE_HEIGHT-2)]

        return (self.IMAGE_HEIGHT, self.IMAGE_WIDTH)

    
    async def start_feeding(self):
        """
        
        the pixel window =>
            ______________________________
            | pixel_0 | pixel_1 | pixel_2 |
            | pixel_3 | pixel_4 | pixel_5 |
            | pixel_6 | pixel_7 | pixel_8 |
            ______________________________

        then at the input port =>

            | pixel_0 | pixel_1 | pixel_2 | 3 | 4 | 5 | 6 | 7 | 8|
        
        
        i, j will point to to pixel_0
        
        """
        self.dut.input_valid.value = 1
        for i in range(self.IMAGE_HEIGHT - 2):
            for j in range(self.IMAGE_WIDTH - 2):
                port_data = []
                for k in range(3):
                    for l in range(3):
                        port_data.append(self.Image[i + k][j + l])
                
                packed_val = 0
                for p, val in enumerate(port_data):
                    packed_val |= (val << (p*8))
                self.dut.data_in.value = packed_val
                await RisingEdge(self.dut.clk)
        self.dut.input_valid.value = 0
        await RisingEdge(self.dut.clk)

    async def set_kernel(self, kernel):
        packed_val = 0
        k = 0
        for i in range(3):
            for j in range(3):
                packed_val |= ((kernel[i][j] & 0xFF) << (k*8))
                k += 1
        self.dut.kernel.value = packed_val
        await RisingEdge(self.dut.clk)
    
    async def set_thresh(self, val):
        self.dut.thresh_value.value = val & 0xFF
        await RisingEdge(self.dut.clk)

    async def construct_output(self):
        out_height = self.IMAGE_HEIGHT - 2
        out_width = self.IMAGE_WIDTH - 2
        expected_pixels = out_height * out_width
        o_i = 0
        o_j = 0

        while expected_pixels > 0:
            await RisingEdge(self.dut.clk)
            await ReadOnly()

            if (self.dut.output_valid.value == 1):
                data = self.dut.data_out.value
                self.output_image[o_i][o_j] = int(data)

                if (o_j >= out_width-1):
                    o_i += 1
                    o_j = 0
                else:
                    o_j += 1
                expected_pixels -= 1
            
        print("DONE!!!!DONE!!!!DONE!!!!DONE!!!!DONE!!!!DONE!!!!DONE!!!!DONE!!!!DONE!!!!")




    

def conv_test(fn):
    @cocotb.test()
    async def wrapped(dut):
        conv = Conv_module(dut)
        await conv.reset()
        return await fn(conv)
    return wrapped





