import cocotb
from cocotb.triggers import RisingEdge, Timer
import os
from pathlib import Path
from cocotb_tools.runner import get_runner

class LineBugger:
    def __init__(self, dut, period=10):
        self.dut = dut
        self.period = period
        cocotb.start_soon(self.clk_gen())

    @property
    