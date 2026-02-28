import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly
import random


class Conv:
    def __init__(self, dut):
        self.dut = dut
        cocotb.start_soon(Clock(self.dut.clk, 10, unit="ns").start())

    async def reset(self):
        await RisingEdge(self.dut.clk)
        self.dut.rst.value = 1
        for _ in range(2):
            await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)
    
    def mask8(self, num):
        return (num & 0xFF)

    async def set_kernel(self, kernel):
        packed_val = 0
        k = 0
        for i in range(3):
            for j in range(3):
                packed_val |= (self.mask8(kernel[i][j]) << (k*8))
                k += 1
        
        self.dut.kernel.value = packed_val
        await RisingEdge(self.dut.clk)
    
    async def set_thresh(self, val):
        self.dut.thresh_val.value = self.mask8(val)
        await RisingEdge(self.dut.clk)

    def generate_rand_cases(self, n):
        cases = []
        expected_outputs = []
        kernel = [-1,-1,-1,-1,8,-1,-1,-1,-1]

        for _ in range(n):
            window = 0
            k = 0
            for _ in range(9):
                window |= 


    async def check_outputs(self, n):


    

def conv_test(fn):
    @cocotb.test()
    async def wrapped(dut):
        conv = Conv(dut)
        await conv.reset()
        return await fn(conv)
    return wrapped