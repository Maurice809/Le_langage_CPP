#include <iostream>
#include <cstring>

using namespace std;

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

void Micro::Affiche2()
{
	cout << endl;
	cout << " Ref        : " << Reference << endl;
	cout << " Marque     : " << Marque << endl;
	cout << " Processeur : " << Processeur << endl;
	cout << " Disque     : " << Disque << endl;
}

int main()
{
	Micro Mic;

	strcpy(Mic.Reference,"X15");
	strcpy(Mic.Marque,"ELX");
	strcpy(Mic.Processeur,"PIII");
	Mic.Disque = 400;

	Mic.Affiche();
	Mic.Affiche2();

	return 0;
}

