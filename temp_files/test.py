import logging
import cocotb

@cocotb.test()
async def test(dut):
    # Create a logger for this testbench
    logger = logging.getLogger("my_testbench")

    logger.debug("This is a debug message")
    logger.info("This is an info message")
    logger.warning("This is a warning message")
    logger.error("This is an error message")
    logger.critical("This is a critical message")