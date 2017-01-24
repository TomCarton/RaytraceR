// vector.h


#ifndef __VECTOR_H__
#define __VECTOR_H__


typedef struct
{
	float x, y, z;

} Vector;

Vector VectorSet(float x, float y, float z);

Vector VectorAdd(Vector va, Vector vb);
Vector VectorSub(Vector va, Vector vb);
Vector VectorMul(Vector v, float m);
Vector VectorDiv(Vector v, float d);

float VectorDot(Vector va, Vector vb);
float VectorNorm(Vector v);

Vector VectorNormalize(Vector v);

#endif // __VECTOR_H__
