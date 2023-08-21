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

	Micro(const char *r, const char *m, const char *p, int d);

	void Affiche();
};

Micro::Micro(const char *r, const char *m, const char *p, int d)
{
	strcpy(Reference, r);
	strcpy(Marque, m);
	strcpy(Processeur, p);
	Disque = d;
}

void Micro::Affiche()
{
	cout << endl;
	cout << " Ref : " << Reference;
	cout << " Marque : " << Marque;
	cout << " Processeur : " << Processeur;
	cout << " Disque : " << Disque;
}

int main()
{
	Micro Mic("X15", "ELX", "PIII", 400);
	Mic.Affiche();

	cout << endl;

	Micro *pMic;
	pMic = new Micro("X16", "PH", "DX4 - 100", 200);
	pMic->Affiche();
	delete pMic;
	cout << endl;
	getch();

	return 0;
}

