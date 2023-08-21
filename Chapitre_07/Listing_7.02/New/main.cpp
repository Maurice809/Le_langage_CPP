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

	Micro(const char *r, const char *m, const char *p, int d);
	Micro();

	void Affiche();
};

Micro::Micro(const char *r, const char *m, const char *p, int d)
{
	strcpy(Reference, r);
	strcpy(Marque, m);
	strcpy(Processeur, p);
	Disque = d;
}

Micro::Micro()
{
	strcpy(Reference, "");
	strcpy(Marque, "");
	strcpy(Processeur, "");
	Disque = 0;
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
	Micro Mic;
	Mic.Affiche();

	cout << endl;

	Micro *pMic;
	pMic = new Micro("X16", "PH", "DX4 - 100", 200);
	pMic->Affiche();
	delete pMic;
	cout << endl;

	return 0;
}
