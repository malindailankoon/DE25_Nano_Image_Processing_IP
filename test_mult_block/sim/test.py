from multiplier import mult_test

@mult_test
async def mult_test_top(multiplier):
    pixel_values = [i for i in range(256)]
    kernel_values = [-1, 8]

    input_pairs = [(pv, kv) for pv in pixel_values for kv in kernel_values]

    expected_results = [i[0]*i[1] for i in input_pairs]

    # expected_results[20] += 2 # insert an error to see if cocotb catches it


    await multiplier.feed_input_consec(input_pairs, expected_results)

