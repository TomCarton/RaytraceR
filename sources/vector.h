// vector.h

typedef struct
{
	float x, y, z;

	Vector(float a, float b, float c) { x = a; y = b; z = c; }
	
} Vector;


Vector VectorAdd(Vector va, Vector vb);
Vector VectorSub(Vector va, Vector vb);
Vector VectorMultiply(Vector v, m);
Vector VectorDivide(Vector v, float d);
