// main.c

#include <stdlib.h>
#include <stdio.h>

#include "../libraries/Imaging/include/imaging.h"

#include "color.h"
#include "vector.h"
#include "ray.h"


static const unsigned int kWidth = 800;
static const unsigned int kHeight = 600;


int main(int argc, char *argv[])
{
    unsigned char *image = malloc(kWidth * kHeight * 3);

    Vector origin = VectorSet(kWidth / 2.f, kHeight / 2.f, 0);

    for (unsigned int y = 0; y < kHeight; ++y)
    {
    	for (unsigned int x = 0; x < kWidth; ++x)
    	{
    		Ray r = RaySet(VectorSet(x, y, 0), VectorSet(0, 0, 1));

    		Color c = ColorMul(ColorSet(255, 0 , 0), (float)y / kHeight);

    		image[(y * kWidth + x) * 3 + 0] = c.r;
    		image[(y * kWidth + x) * 3 + 1] = c.g;
    		image[(y * kWidth + x) * 3 + 2] = c.b;
    	}
    }

    ImageSavePNG("result.png", image, kWidth, kHeight);

    free(image);

    return 0;
}
