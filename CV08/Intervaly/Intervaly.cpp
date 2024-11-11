// Intervaly.cpp: Definuje vstupní bod pro aplikaci.
//

#include "Intervaly.h"
#include "knobloch.h"

using namespace std;

double interval1[3][2] = {
	1.5, 2.8,
	1.5, 2.8,
	1.5, 4.8};
double interval2[3][2] = {
	1.6, 2.0,
	3.6, 7.5,
	2.6, 7.5};

int main()
{
	double prunik_zac, prunik_kon;
	int existuje_prunik;

	if (prunik(interval1[0][0], interval1[0][1], 13.0, 15.4, &prunik_zac, &prunik_kon)) {
		printf("Slava! Prunik existuje.\n");
	};

	cout << "Hello CMake." << endl;
	return 0;
}
