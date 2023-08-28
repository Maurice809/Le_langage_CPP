#include <iostream.h>
#include <conio.h>

class Materiel
{
	public:
		virtual void Affiche() {};
};

class Micro : public Materiel
{
	public:
		virtual void Affiche() {};
};

class Imprimante : public Materiel
{
	public:
		virtual void Affiche() {};
};

void TypeObjet(Materiel *p)
{
	Materiel *pMat;
	Micro *pMic;
	Imprimante *pImp;

	pMic = dynamic_cast<Micro *>(p);
	if (pMic != NULL)
		cout << "OK, objet de type Micro" << endl;
	else
	{
		pImp = dynamic_cast<Imprimante *>(p);
		if (pImp != NULL)
			cout << "OK, objet de type Imprimante" << endl;
		else
		{
			pMat = dynamic_cast<Materiel *>(p);
			if (pMat != NULL)
				cout << "OK, objet de type Materiel" << endl;
			else
				cout << "Type d'objet inconnu" << endl;
		}
	}
}

int main()
{
	Materiel *pMat;

	pMat = new Imprimante;
	TypeObjet(pMat);
	delete pMat;

	pMat = new Materiel;
	TypeObjet(pMat);
	delete pMat;

	pMat = new Micro;
	TypeObjet(pMat);
	delete pMat;

	Materiel mat;
	TypeObjet(&mat);
	getch();

    return 0;
}
