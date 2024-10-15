// Vektory.cpp: Definuje vstupní bod pro aplikaci.
//

#include "Vektory.h"
#include "vecfun.h"

using namespace std;

double A[3], B[3], C[3];

int main()
{
	vectorMult(A,B, &C[0]);
	
	cout << "Hello CMake." << endl;
	return 0;
}
