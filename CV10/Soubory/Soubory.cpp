// Soubory.cpp : Defines the entry point for the application.
//

#include "Soubory.h"
#include "stdio.h"

int main()
{
	/* Kompilovany soubor .exe je v adresari ".\out\build\x64-debug", proto musime vylezt o par urovni vys... */
	const char* VstupniSouborCesta = "..\\..\\..\\vstup.txt";
	char aktualniZnak;
	FILE* vstup;
	int pocetZnaku = 0;

	if (fopen_s(&vstup, VstupniSouborCesta, "r") != 0)
	{
		printf("Nelze otevrit vstupni soubor!");
		return -1;
	}

	while ((aktualniZnak = fgetc(vstup)) != EOF)
	{
		pocetZnaku++;
	}

	fclose(vstup);
	
	printf("Pocet znaku je: %d\n", pocetZnaku);


	printf("Konec.\n");
	return 0;
}
