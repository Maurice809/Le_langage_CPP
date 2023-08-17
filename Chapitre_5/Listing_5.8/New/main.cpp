#include <iostream>
// Bibliotehque C pour string
#include <cstring>

using namespace std;

int main()
{
	char Titre[40+1];
	char Choix[40+1];

	// copie un chaine de caratere
	strcpy(Titre, "C++");

	cout << endl;
	cout << "Veiller saisir un titre : ";
	cin >> Choix;
	cout << endl;

	//comparaison de la chaine
	if (strcmp(Titre, Choix) == 0)
		cout << "Disponible" << endl;
	else
		cout << "Titre inconnu" << endl;

	return 0;
}
