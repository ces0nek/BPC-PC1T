
#include "VectorMath.h"
#include "stdio.h"
#include "math.h"

/*
* Funkce pro operace s vektory
*/
struct vector3d operace(struct vector3d u, struct vector3d v,
	enum typOperace typ) {
	switch(typ) {
	case soucet:
		return(u);
	case skalarniSoucin:
		return(v);
	case vektorovySoucin:
		return(v);
	default:
		return(u);
	}
}

/*
* Funkce pro tisk
* 
* Implementujte funkci tisk tak aby tiskla vektor 
*	ve formátu „w = (x, y, z)“ a jeho velikost ve
*	formátu „|w| = velikost“.
*/
void tisk(struct vector3d u) {
	printf("w = (%f, %f, %f)\n", u.x, u.y, u.z);
	double abs = sqrt(u.x*u.x + u.y*u.y + u.z*u.z);
	printf("|w| = %f", abs);
}

/*
* Funkce pro rotaci vektoru o 90deg kolem zadane osy
*/
void rotuj(struct vector3d* vec, enum typOsy osa) {
	double tmpX = vec->x;
	double tmpY = vec->y;
	double tmpZ = vec->z;
	
	// Rotujeme vektor kolem zadane osy:
	switch(osa){
	case osaX:
		// tady se musite zamyslet:
		vec->y = -tmpZ;
		vec->z = -tmpY;
		break;
	case osaY:

		break;
	case osaZ:

		break;
	}
}