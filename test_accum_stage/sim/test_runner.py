import os
from pathlib import Path
from cocotb_tools.runner import get_runner


def run_test():
    sim = os.getenv("SIM", "verilator")
    proj_dir = Path(__file__).parent.parent
    rtl_dir = proj_dir / "rtl"
    src = [
        str(rtl_dir / "full_adder.sv"),
        str(rtl_dir / "accum_block.sv")
    ]

    runner = get_runner(sim)
    runner.build(
        sources=src,
        hdl_toplevel="accum_block",
        always=True,
        clean=True
    )

    runner.test(
        hdl_toplevel="accum_block",
        test_module=["accum", "test"] # TODO!!

    )


if __name__ == "__main__":
    run_test()