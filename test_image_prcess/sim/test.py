from conv import conv_test
import cocotb
from PIL import Image
import numpy as np
from pathlib import Path



@conv_test
async def conv_sobel(conv):
    await conv.reset()

    # vertical sobel filter
    # kernel = [[-1,0,1],
    #           [-2, 0,2],
    #           [-1,0,1]]

    # horizontal sobel filter
    # kernel = [[-1,-2,-1],
    #           [0, 0,0],
    #           [1,2,1]]
    
    # laplacian kernel
    kernel = [[-1,-1,-1],
              [-1, 8,-1],
              [-1,-1,-1]]
    
    await conv.set_kernel(kernel)

    await conv.set_thresh(45)

    current_dir = Path(__file__).parent.resolve()
    # lennapath = str(current_dir / "strawhat_gray.jpg")
    # lennapath = str(current_dir / "luffy_gray.jpg")
    lennapath = str(current_dir / "lennaj.jpg")
    height, width = conv.load_image(lennapath)


    out_gen_thread = cocotb.start_soon(conv.construct_output())

    await conv.start_feeding()

    await out_gen_thread

    output_matrix = np.array(conv.output_image, dtype=np.uint8)

    grayscale_image = Image.fromarray(output_matrix, "L")

    grayscale_image.save("lenna_edges.jpg")







    
            
