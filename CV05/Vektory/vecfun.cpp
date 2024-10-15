
// Definice funkce:
/*
* Vektorovy soucin dvou 3-rozmernych vektoru
* c = a*b
*/
void vectorMult(double a[3], double b[3], double c[3]) {
	// nejaky vypocet...
	*(c++) = *(a++) + *(b++);
	*(c++) = *(a++) + *(b++);
	*(c++) = *(a++) + *(b++);
}