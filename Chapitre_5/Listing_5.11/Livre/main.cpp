#include <iostream.h>
#include <string.h>

struct Telephone
{
	char Nom[30+1];
	char Prenom[30+1];
	char Numero[30+1];
};

void Affiche(Telephone t)
{
	cout << "Nom    : " << t.Nom << "\n";
	cout << "Prenom : " << t.Prenom << "\n";
	cout << "Numero : " << t.Numero << "\n";
}

int main()
{
	Telephone Tel;

	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	Affiche(Tel);

	return 0;
}
