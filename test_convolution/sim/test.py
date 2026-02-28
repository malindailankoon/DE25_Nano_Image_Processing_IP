from conv import conv_test


@conv_test
async def test_convolution_brute(conv):
    await conv.reset()
    kernel = [[-1,-1,-1],
              [-1, 8,-1],
              [-1,-1,-1]]
    
    await conv.set_kernel(kernel)

    await conv.set_thresh(5)

    