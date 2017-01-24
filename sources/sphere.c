// sphere.c

#include <math.h>

#include "vector.h"
#include "ray.h"

#include "sphere.h"


Sphere SphereSet(Vector c, float r)
{
	Sphere s;

	s.c = c;
	s.r = r;

	return s;
}

int SphereIntersect(Sphere s, Ray r, float *t)
{
	Vector oc = VectorSub(s.c, r.o);

	float b = 2 * VectorDot(oc, r.d);
	float c = VectorDot(oc, oc) - s.r * s.r;

	float d = b * b - 4 * c;

	if (d < 0)
	{
		return 0;
	}
	else
	{
		d = sqrtf(d);

		float t0 = -b - d;
		float t1 = -b + d;

		*t = t0 < t1 ? t0 : t1;

		return 1;
	}
}