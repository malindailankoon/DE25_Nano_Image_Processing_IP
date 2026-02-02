import cocotb 
import os
from pathlib import Path
from cocotb_tools.runner import get_runner


def run_test():
    sim = os.getenv("SIM", "verilator")
    proj_dir = Path(__file__).parent.parent
    rtl_dir = proj_dir / "rtl"
    src = [
        str(rtl_dir / "multiply_block.sv"),
        str(rtl_dir / "multiply8.sv"),
        str(rtl_dir / "s2u.sv"),
        str(rtl_dir / "u2s.sv"),
        str(rtl_dir / "full_adder.sv"),
        str(rtl_dir / "half_adder.sv")
    ]

    runner = get_runner(sim)
    runner.build(
        sources=src,
        hdl_toplevel="multiply_block",
        always=True,
        clean=True,
        # build_args=["--trace", "--trace-structs"]
        waves=True
    )

    runner.test(
        hdl_toplevel="multiply_block",
        test_module=["multiplier", "test"],
        # test_args=["--trace", "--trace-structs"]
        waves=True
    )


if __name__ == "__main__":
    run_test()

