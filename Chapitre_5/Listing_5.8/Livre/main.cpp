#include <iostream.h>
#include <string.h>

using namespace std;

int main()
{
	char Titre[40+1];
	char Choix[40+1];

	// copie un chaine de caratere
	strcpy(Titre, "C++");

	cout << "Veiller saisir un titre : ";
	cin >> Choix;

	//comparaison de la chaine
	if (strcmp(Titre, Choix) == 0)
		cout << "Disponible" << "\n";
	else
		cout << "Titre inconnu" << "\n";

	return 0;
}
