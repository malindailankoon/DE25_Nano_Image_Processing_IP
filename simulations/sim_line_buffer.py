import cocotb
from cocotb.triggers import RisingEdge, Timer
import os
from pathlib import Path
from cocotb_tools.runner import get_runner

class LineBuffer:
    def __init__(self, dut, period=10):
        self.dut = dut
        self.period = period
        cocotb.start_soon(self.clk_gen()) # run the clock in the background
    
    def safe_int(self, signal): # safely print signals to avoid x and z, but since i'm using verilator i think i don't need this
        try:
            return int(signal)
        except:
            return -1

    async def clk_gen(self):
        while True:
            self.dut.clk.value = 0
            await Timer(self.period // 2, unit="ns")
            self.dut.clk.value = 1
            await Timer(self.period // 2, unit="ns")
    
    async def reset(self, cycles=2):
        self.dut.rst.value = 1
        for _ in range(cycles):
            await RisingEdge(self.dut.clk)
        self.dut.rst.value = 0
        await RisingEdge(self.dut.clk)

    async def moniter_signals(self):

        with open("sim_results.txt", "w") as fh:

            fh.write(f"{'Time':<10} | {'WrtPtr':<7} | {'RdPtr':<7} | {'Full':<4} | {'Done':<4} | {'Data In':<8} | {'Data Out (Hex)':<15}\n")
            fh.write("-" * 90 + "\n")
            fh.flush()

            while True:
                await RisingEdge(self.dut.clk)

                wrtptr = self.safe_int(self.dut.wrtptr.value)
                rdptr = self.safe_int(self.dut.rdptr.value)
                full = self.safe_int(self.dut.full.value)
                done = self.safe_int(self.dut.done.value)
                din = self.safe_int(self.dut.data_in.value)
                dout = self.safe_int(self.dut.data_out.value)

                if (self.dut.data_in_valid.value == 1 or self.dut.rd_req.value):
                    fh.write(f"{cocotb.utils.get_sim_time(unit='ns'):<6} ns | "
                        f"{wrtptr:<7} | {rdptr:<7} | {full:<4} | {done:<4} | "
                        f"{din:<8} | {hex(dout):<16}\n")
                    fh.flush()
            
        
            
    async def write_data(self, data_list):
        print(f"\n[Driver] Writing {len(data_list)} items...")
        for data in data_list:
            self.dut.data_in.value = data
            self.dut.data_in_valid.value = 1
            await RisingEdge(self.dut.clk)
        
        self.dut.data_in_valid.value = 0
        print("[Driver] Write Complete.")
    
    async def drain_buffer(self):
        print("\n[Driver] Reading until done...")
        self.dut.rd_req.value = 1

        while self.dut.done.value == 0:
            await RisingEdge(self.dut.clk)

        await RisingEdge(self.dut.clk)
        self.dut.rd_req.value = 0
        print("[Driver] Read Complete.")



@cocotb.test()
async def test_line_buffer(dut):
    lb = LineBuffer(dut)
    cocotb.start_soon(lb.moniter_signals())
    await lb.reset()

    test_data = [i % 256 for i in range(512)]

    await lb.write_data(test_data)

    for _ in range(5):
        await RisingEdge(dut.clk)

    await lb.drain_buffer()

    for _ in range(5):
        await RisingEdge(dut.clk)


def run_test():
    sim = os.getenv("SIM", "verilator")
    proj_dir = Path(__file__).parent.parent
    rtl_dir = proj_dir / "rtl"
    src = [
        str(rtl_dir / "line_buffer.sv")
    ]

    runner = get_runner(sim)
    runner.build(
        sources=src,
        hdl_toplevel="line_buffer",
        always=True,
        build_args=["--trace", "--trace-structs"]
    )

    runner.test(
        hdl_toplevel="line_buffer",
        test_module="sim_line_buffer",
        testcase="test_line_buffer"
    )


if __name__ == "__main__":
    run_test()

