// color.c

#include "color.h"


Color ColorAdd(Color a, Color b)
{
	Color c;

	c.r = a.r + b.r;
	c.g = a.g + b.g;
	c.b = a.b + b.b;

	return c;
}

void ColorClamp(Color *a)
{
	a->r = a->r < 0 ? 0 : a->r > 255 ? 255 : a->r;
	a->g = a->g < 0 ? 0 : a->g > 255 ? 255 : a->g;
	a->b = a->b < 0 ? 0 : a->b > 255 ? 255 : a->b;
}