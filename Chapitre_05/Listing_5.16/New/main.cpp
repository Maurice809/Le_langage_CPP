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

void Affiche(Telephone *pTel)
{
// Affichage
	cout << endl;
	cout << "Nom    : " << pTel->Nom << endl;
	cout << "Prenom : " << pTel->Prenom << endl;
	cout << "Numero : " << pTel->Numero << endl;
}

int main()
{
	// Definition de la structure
	Telephone Tel;

	// Replissage
	strcpy(Tel.Nom, "SIMON");
	strcpy(Tel.Prenom, "PAUL");
	strcpy(Tel.Numero, "11.11.11.11.11");

	// Appel de fonction Affiche
	Affiche(&Tel);

	return 0;
}
