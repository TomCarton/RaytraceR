// main.c

#include <stdlib.h>
#include <stdio.h>

#include "../libraries/Imaging/include/imaging.h"

#include "color.h"


static const unsigned int kWidth = 800;
static const unsigned int kHeight = 600;


int main(int argc, char *argv[])
{
    unsigned char *image = malloc(kWidth * kHeight * 3);

    for (unsigned int y = 0; y < kHeight; ++y)
    {
    	for (unsigned int x = 0; x < kWidth; ++x)
    	{
    		char col = 255 * y / kHeight;
    		image[(y * kWidth + x) * 3 + 0] = col;
    		image[(y * kWidth + x) * 3 + 1] = col;
    		image[(y * kWidth + x) * 3 + 2] = col;
    	}
    }

    ImageSavePNG("result.png", image, kWidth, kHeight);

    free(image);

    return 0;
}
