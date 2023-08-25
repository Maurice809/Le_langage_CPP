#include <iostream.h>
#include <string.h>
#include <conio.h>

class Materiel
{
	protected:
		char Reference[20+1];
		char Marque[20+1];
	public:
		Materiel(const char *r, const char *m);
		~Materiel();
};

class Micro : public Materiel
{	
	protected:
		char Processeur[20+1];
		int	Disque;
	public:
		Micro(const char *r, const char *m, const char *p, int d);
		~Micro();

		void Affiche();
};

Materiel::Materiel(const char *r, const char *m) 
{
	cout << " Constructeur Materiel : " << this << endl;
	strcpy(Reference, r);
	strcpy(Marque, m);
}

Materiel::~Materiel()
{
	cout << " Destructeur Materiel  : " << this << endl;
}

Micro::Micro(const char *r, const char *m, const char *p, int d) : Materiel(r, m)
{
	cout << " Constructeur Micro    : " << this << endl;
	strcpy(Processeur, p);
	Disque = d;
}

void Micro::Affiche()
{
	cout << " Ref : " << Reference;
	cout << " Marque : " << Marque;
	cout << " Processeur : " << Processeur;
	cout << " Disque : " << Disque;
	cout << endl;
}

Micro::~Micro()
{
	cout << " Destructeur Micro     : " << this << endl;
}

int main()
{
	cout << endl;
	Micro *pMic;
	pMic = new Micro("X16", "PH", "DX4-100", 200);
	pMic->Affiche();
	delete pMic;
	getch();

    return 0;
}
