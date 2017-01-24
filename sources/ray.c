// ray.c

#include "ray.h"


Ray RaySet(Vector o, Vector d)
{
	Ray r;
	
	r.o = o;
	r.d = d;

	return r;
}