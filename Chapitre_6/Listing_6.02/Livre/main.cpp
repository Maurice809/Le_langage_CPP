#include <iostream.h>
#include <string.h>

class Micro
{
	public:
		char Reference[20+1];
		char Marque[20+1];
		char Processeur[20+1];
		int Disque;

		void Affiche();
		void Affiche2();
};


void Micro::Affiche()
{
	cout << endl;
	cout << " Ref : " << Reference;
	cout << " Marque : " << Marque;
	cout << " Processeur : " << Processeur;
	cout << " Disque : " << Disque << endl;
}

int main()
{
	Micro *pMic;

	pMic = new Micro;

	strcpy(pMic->Reference,"X15");
	strcpy(pMic->Marque,"ELX");
	strcpy(pMic->Processeur,"PIII");
	pMic->Disque = 400;

	pMic->Affiche();

	return 0;
}

