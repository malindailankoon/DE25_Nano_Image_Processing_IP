"""

the target kernel contains -1 and 8

and the pixels can range from 0 to 255

so only one of the inputs (kernal data) is signed.

the multiplier is 6 stages, and should support back to back data and also some bubbles as well

"""


import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly


class Multiplier:
    def __init__(self, dut, period=10):
        self.dut = dut
        self.period = period
        cocotb.start_soon(Clock(dut.clk, self.period, unit="ns").start())
    
    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        for _ in range(cycles):
            await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)
        

    # async def moniter_internal_signals(self):
    #     with open("internal_signals.txt", 'w') as fh:
    #         fh.write(f"{'Time':<10} | {'stage_one_valid':<10} | {'stage_two_valid':<10} | {'stage_three_valid':<10} | {'stage_four_valid':<10} | {'stage_five_valid':<10} | {'output_valid':<10}\n")
    #         fh.write("-" * 90 + "\n")
    #         fh.flush()

    #         while True:
    #             pass
    
    async def check_output(self, input_pairs, result_list):
        expected_i = 0

        while (expected_i < len(result_list)):
            await RisingEdge(self.dut.clk)
            await ReadOnly()

            if self.dut.output_valid.value == 1:
                actual_val = self.dut.multiply_out.value.signed_integer
                expected_val = result_list[expected_i]
                assert actual_val == expected_val, \
                    f"Error {input_pairs[expected_i][0]} * {input_pairs[expected_i][1]}: expected: {expected_val}, got: {actual_val}"
                expected_i += 1     


    async def feed_input_consec(self, input_pairs, result_list):
        """feed input in every clock cycle"""
        # input_pairs = (pixel_data, kernal data)
        await self.reset()
        check_thread = cocotb.start_soon(self.check_output(input_pairs, result_list))
        for ip in input_pairs:
            self.dut.pixel_data.value = ip[0]
            self.dut.kernel_data.value = ip[1]
            self.dut.input_valid.value = 1
            await RisingEdge(self.dut.clk)

        self.dut.input_valid.value = 0

        # waiting some cycles to ensure that the pipeline empties
        await check_thread

    
def mult_test(fn):
    @cocotb.test()
    async def wrapped(dut):
        multiplier = Multiplier(dut)
        await multiplier.reset()
        return await fn(multiplier)
    return wrapped





