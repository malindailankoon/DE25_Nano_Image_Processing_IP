import cocotb
from cocotb.clock import Clock
from cocotb.triggers import RisingEdge, ReadOnly


class Accum:
    def __init__(self, dut, period=10):
        self.dut = dut
        self.period = period
        cocotb.start_soon(Clock(self.dut.clk, self.period, unit="ns").start())

    async def reset(self):
        self.dut.rst.value = 1
        for _ in range(2):
            await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)

    async def feed_single_input(self, input_arr, expected_results):
        await self.reset()
        packed_val = 0
        for i, val in enumerate(input_arr):
            packed_val |= (val << (i*16))

        check_thread = cocotb.start_soon(self.check_output(expected_results))
        self.dut.data_in.value = packed_val
        self.dut.input_valid.value = 1
        await RisingEdge(self.dut.clk)

        self.dut.input_valid.value = 0
        await check_thread

    
        


    async def check_output(self, expected_results):
        expected_i = 0

        while (expected_i < len(expected_results)):
            await RisingEdge(self.dut.clk)
            await ReadOnly()

            if self.dut.out_valid.value == 1:
                acutal_val = self.dut.data_out.value.integer
                expected_val = expected_results[expected_i]
                assert acutal_val == expected_val, \
                    f"Error for a summing of array, expected: {expected_val}, got: {acutal_val}"
                expected_i += 1



def accum_test(fn):
    @cocotb.test()
    async def wrapped(dut):
        accum = Accum(dut)
        await accum.reset()
        return await fn(accum)
    return wrapped