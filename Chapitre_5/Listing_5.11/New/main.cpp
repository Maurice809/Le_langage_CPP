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

// fonction d'affichage
void Affiche(Telephone t)
{
	cout << "Nom    : " << t.Nom << endl;
	cout << "Prenom : " << t.Prenom << endl;
	cout << "Numero : " << t.Numero << endl;
}

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
	Affiche(Tel);

	return 0;
}
