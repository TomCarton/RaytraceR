// vector.c

#include "vector.h"


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

Vector VectorMultiply(Vector v, float m)
{
	Vector w;

	w.x = v.x * m;
	w.y = v.y * m;
	w.z = v.z * m;

	return w;
}

Vector VectorDivide(Vector v, float d)
{
	Vector w;

	w.x = v.x / d;
	w.y = v.y / d;
	w.z = v.z / d;

	return w;
}