// sphere.c

#include "sphere.h"


Sphere SphereSet(Vector o, float r)
{
	Sphere s;

	s.o = o;
	s.r = r;

	return s;
}
