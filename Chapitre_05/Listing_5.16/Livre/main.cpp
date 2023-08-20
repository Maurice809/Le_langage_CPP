#include <iostream.h>
#include <cstring.h>
#include <conio.h>

struct Telephone
{
	char Nom[30+1];
	char Prenom[30+1];
	char Numero[30+1];
};

void Affiche(Telephone *pTel)
{
	cout << "Nom    : " << pTel->Nom << endl;
	cout << "Prenom : " << pTel->Prenom << endl;
	cout << "Numero : " << pTel->Numero << endl;
}

int main()
{
	Telephone Tel;

	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	Affiche(&Tel);
	getch();

	return 0;
}
