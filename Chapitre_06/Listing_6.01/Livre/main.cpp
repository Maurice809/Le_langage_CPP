#include <iostream.h>
#include <string.h>
#include <conio.h>

class Micro
{
	public:
		char Reference[20+1];
		char Marque[20+1];
		char Processeur[20+1];
		int Disque;

		void Affiche();
};


void Micro::Affiche()
{
	cout << " Ref : " << Reference;
	cout << " Marque : " << Marque;
	cout << " Processeur : " << Processeur;
	cout << " Disque : " << Disque << endl;
}

int main()
{
	Micro Mic;

	strcpy(Mic.Reference,"X15");
	strcpy(Mic.Marque,"ELX");
	strcpy(Mic.Processeur,"PIII");
	Mic.Disque = 400;

	Mic.Affiche();
	getch();

	return 0;
}

