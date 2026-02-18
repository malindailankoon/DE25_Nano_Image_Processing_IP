import os
from pathlib import Path
from cocotb_tools.runner import get_runner

def run_test():
    sim = os.getenv("SIM", "verilator")
    proj_dir = Path(__file__).parent.parent
    rtl_dir = proj_dir / ".." / "rtl"

    src = [
        str(rtl_dir / "conv_block.sv"),
        str(rtl_dir/"multiply_stage.sv"),
        str(rtl_dir / "multiply_block.sv"),
        str(rtl_dir / "multiply8.sv"),
        str(rtl_dir / "s2u.sv"),
        str(rtl_dir / "u2s.sv"),
        str(rtl_dir / "full_adder.sv"),
        str(rtl_dir / "half_adder.sv"),
        str(rtl_dir/ "accum_block.sv"),
        str(rtl_dir/ "thresh_block.sv")
    ]

    runner = get_runner(sim)
    runner.build(
        sources=src,
        hdl_toplevel="conv_block",
        always=True,
        clean=True,
        waves=True
    )

    runner.test(
        hdl_toplevel="conv_block",
        test_module=["test"],
        waves=True
    )


if __name__ == "__main__":
    run_test()
