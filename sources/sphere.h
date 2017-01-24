// sphere.h

#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "vector.h"


typedef struct
{
	Vector c;
	float r;

} Sphere;

Sphere SphereSet(Vector c, float r);

int SphereIntersect(Sphere s, Ray r, float *t);

Vector SphereNormal(Sphere s, Vector p);


#endif // __SPHERE_H__
