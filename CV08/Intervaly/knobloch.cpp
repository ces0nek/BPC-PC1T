/*
* knobloch.h: Modul mych vlastnich skvelych funkci
*/

/*
* prunik: Funkce testuje, zda existuje prunik intervalu
*	vraci 1 jestlize prunik existuje
*	argumenty:	zacatek 1. intervalu, konec 1. intervalu,
*				zacatek 2. intervalu, konec 2. intervalu,
*		pointer na zacatek pruniku, pointer na konec pruniku.
*/
int prunik(double zacatek1, double konec1, double zacatek2, double konec2,
	double* vysl_zacatek, double* vysl_konec)
{
	// 1. bod: predpokladame poctive zadane intervaly
	if (zacatek2 >= zacatek1 && konec2 >= zacatek1) {
		return 1;
	}

	// 2. bod: intervaly mohou byt zadane vselijak
	return 0;
}

/*
* prunik: Funkce testuje, zda existuje prunik intervalu
*	vraci 1 jestlize prunik existuje
*	argumenty:	zacatek 1. intervalu, konec 1. intervalu,
*				zacatek 2. intervalu, konec 2. intervalu,
*		pointer na zacatek pruniku, pointer na konec pruniku.
*/
int prunik_2(double zacatek1, double konec1, double zacatek2, double konec2,
	double* vysl_zacatek, double* vysl_konec)
{
	// 1. bod: predpokladame poctive zadane intervaly
	if (zacatek2 >= zacatek1 && konec2 >= zacatek1) {
		return 1;
	}

	// 2. bod: intervaly mohou byt zadane vselijak
	return 0;
}