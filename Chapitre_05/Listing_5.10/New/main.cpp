#include <iostream>
#include <cstring>

using namespace std;

// Creation de la structure
struct Telephone
{
	char Nom[30+1];
	char Prenom[30+1];
	char Numero[30+1];
};

int main()
{
	// Definition de la structure
	Telephone Tel;

	// Replissage
	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	// Affichage
	cout << endl;
	cout << "Nom    : " << Tel.Nom << endl;
	cout << "Prenom : " << Tel.Prenom << endl;
	cout << "Numero : " << Tel.Numero << endl;

	return 0;
}
