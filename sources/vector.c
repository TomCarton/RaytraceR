// vector.c

#include <math.h>

#include "vector.h"


Vector VectorSet(float x, float y, float z)
{
	Vector v;
	
	v.x = x;
	v.y = y;
	v.z = z;

	return v;	
}


Vector VectorAdd(const Vector va, Vector vb)
{
	Vector vc;

	vc.x = va.x + vb.x;
	vc.y = va.y + vb.y;
	vc.z = va.z + vb.z;

	return vc;
}

Vector VectorSub(Vector va, Vector vb)
{
	Vector vc;

	vc.x = va.x - vb.x;
	vc.y = va.y - vb.y;
	vc.z = va.z - vb.z;

	return vc;
}

Vector VectorMul(Vector v, float m)
{
	Vector w;

	w.x = v.x * m;
	w.y = v.y * m;
	w.z = v.z * m;

	return w;
}

Vector VectorDiv(Vector v, float d)
{
	Vector w;

	w.x = v.x / d;
	w.y = v.y / d;
	w.z = v.z / d;

	return w;
}

float VectorNorm(Vector v)
{
	return sqrtf(v.x * v.x + v.y * v.y + v.z * v.z);
}

float VectorDot(Vector va, Vector vb)
{
	return va.x * vb.x + va.y * vb.y + va.z * vb.z;
}
