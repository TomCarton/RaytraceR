// sphere.h

#ifndef __SPHERE_H__
#define __SPHERE_H__

#include "vector.h"


typedef struct
{
	Vector o;
	float r;

} Sphere;

Sphere SphereSet(Vector o, float r);


#endif // __SPHERE_H__
