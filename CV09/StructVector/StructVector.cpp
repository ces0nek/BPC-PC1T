// StructVector.cpp: Definuje vstupní bod pro aplikaci.
//

#include "StructVector.h"
#include "VectorMath.h"
#include "stdio.h"


int main()
{
	struct vector3d a = {.x = 0.0, .y = 0.0, .z = 0.0 };
	struct vector3d b = {.x = 0.0, .y = 0.0, .z = 0.0 };
	struct vector3d c;
	enum typOperace jakaOperace;
	enum typOsy jakaOsa;

	printf("Zadej vektor a (x, y, z): ");
	scanf_s("%lf,%lf,%lf", &a.x, &a.y, &a.z);
	printf("Zadej vektor b (x, y, z): ");
	scanf_s("%lf,%lf,%lf", &b.x, &b.y, &b.z);
		
	printf("Zadej vektor operaci\n");
	printf("  1 = soucet\n  2 = skalarni soucin\n  3 = vektorovy soucin\n");
	printf(":");
	scanf_s("%d", &jakaOperace);
	c = operace(a, b, jakaOperace);
	tisk(c);
	printf("Kolem ktere osy rotovat\n  1 = x\n  2 = y\n  3 = z\n:");
	scanf_s("%d", &jakaOsa);
	rotuj(&c, jakaOsa);
	tisk(c);

	return 0;
}
