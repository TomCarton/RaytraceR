// color.c

#include "color.h"


Color ColorSet(int r, int g, int b)
{
	Color c;

	c.r = r;
	c.g = g;
	c.b = b;

	return c;
}

Color ColorAdd(Color a, Color b)
{
	Color temp;

	temp.r = a.r + b.r;
	temp.g = a.g + b.g;
	temp.b = a.b + b.b;

	return temp;
}

Color ColorMul(Color c, float m)
{
	Color temp;

	temp.r = c.r * m;
	temp.g = c.g * m;
	temp.b = c.b * m;

	return temp;
}

Color ColorClamp(Color c)
{
	Color temp;

	temp.r = c.r < 0 ? 0 : c.r > 255 ? 255 : c.r;
	temp.g = c.g < 0 ? 0 : c.g > 255 ? 255 : c.g;
	temp.b = c.b < 0 ? 0 : c.b > 255 ? 255 : c.b;

	return temp;
}
