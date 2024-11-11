// StructVector.cpp: Definuje vstupní bod pro aplikaci.
//

#include "StructVector.h"
#include "VectorMath.h"
#include "stdio.h"


int main()
{
	struct vector3d a = {.x = 0.0, .y = 0.0, .z = 0.0 };
	printf("Zadej vektor (x, y, z): ");
	scanf_s("%lf,%lf,%lf", &a.x, &a.y, &a.z);
	printf("\n");
	
	tisk(a);

	return 0;
}
