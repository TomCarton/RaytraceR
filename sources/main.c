// main.c

#include <stdlib.h>
#include <stdio.h>

#include "../libraries/Imaging/include/imaging.h"

#include "color.h"
#include "vector.h"
#include "ray.h"
#include "sphere.h"


static const unsigned int kWidth = 800;
static const unsigned int kHeight = 600;


int main(int argc, char *argv[])
{
    unsigned char *image = malloc(kWidth * kHeight * 3);

	Sphere sphere = SphereSet(VectorSet(kWidth / 2.f, kHeight / 2.f, 50), 100);

    for (unsigned int y = 0; y < kHeight; ++y)
    {
    	for (unsigned int x = 0; x < kWidth; ++x)
    	{
    		Ray ray = RaySet(VectorSet(x, y, 0), VectorSet(0, 0, 1));

    		Color c = ColorMul(ColorSet(0, 0 , 128), (float)y / kHeight);

    		float t;
    		if (SphereIntersect(sphere, ray, &t))
    		{
    			c = ColorSet(255, 255, 255);
    		}


    		image[(y * kWidth + x) * 3 + 0] = c.r;
    		image[(y * kWidth + x) * 3 + 1] = c.g;
    		image[(y * kWidth + x) * 3 + 2] = c.b;
    	}
    }

    unsigned char *reducedImage = ImageDownsize(image, kWidth, kHeight);
	ImageSavePNG("result.png", reducedImage, kWidth >> 1, kHeight >> 1);
    free(reducedImage);

    free(image);

    return 0;
}
