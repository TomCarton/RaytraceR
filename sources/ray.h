// ray.h

#include "vector.h"


typedef struct
{
	Vector o, d;

} Ray;


Ray RaySet(Vector o, Vector d);
