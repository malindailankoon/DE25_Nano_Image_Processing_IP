from accum import accum_test

@accum_test
async def accum_test_top(accum):
    input_lists = [255 for _ in range(9)]

    expected_results = [255*9]

    await accum.feed_single_input(input_lists, expected_results)

    