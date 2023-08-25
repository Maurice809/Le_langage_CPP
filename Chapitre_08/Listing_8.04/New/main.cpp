#include <iostream>

using namespace std;

class Materiel
{
	public:
		Materiel();
		~Materiel();
};

class Micro : public Materiel
{
	public:
		Micro();
		~Micro();
};

Materiel::Materiel()
{
	cout << " Constructeur Materiel : " << this << endl;
}

Materiel::~Materiel()
{
	cout << " Destructeur Materiel  : " << this << endl;
}

Micro::Micro()
{
	cout << " Constructeur Micro    : " << this << endl;
}

Micro::~Micro()
{
	cout << " Destructeur Micro     : " << this << endl;
}

int main()
{
	cout << endl;
	cout << "CREATION D'OBJET DE TYPE MATERIEL" << endl;
	Materiel *pMat;
	pMat = new Materiel;
	cout << "DESTRUCTEUR DE L'OBJET DE TYPE MATERIEL" << endl;
	delete pMat;
	cout << endl;
	cout << "CREATION D'OBJET DE TYPE MICRO" << endl;
	Micro *pMic;
	pMic = new Micro;
	cout << endl;
	cout << "DESTRUCTION DE L'OBJET DE TYPE MICRO" << endl;
	delete pMic;
	cout << endl;

    return 0;
}
