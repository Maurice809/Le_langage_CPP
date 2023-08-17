#include <iostream.h>
#include <string.h>

struct Telephone
{
	char Nom[30+1];
	char Prenom[30+1];
	char Numero[30+1];
};

int main()
{
	Telephone Tel;

	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	cout << "Nom    : " << Tel.Nom << "\n";
	cout << "Prenom : " << Tel.Prenom << "\n";
	cout << "Numero : " << Tel.Numero << "\n";

	return 0;
}
