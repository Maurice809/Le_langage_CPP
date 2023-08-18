#include <iostream.h>
#include <cstring.h>

struct Telephone
{
	char Nom[30+1];
	char Prenom[30+1];
	char Numero[30+1];
};

void Affiche(Telephone *pTel)
{
	cout << "Nom    : " << pTel->Nom << "\n";
	cout << "Prenom : " << pTel->Prenom << "\n";
	cout << "Numero : " << pTel->Numero << "\n";
}

int main()
{
	Telephone Tel;

	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	Affiche(&Tel);

	return 0;
}
