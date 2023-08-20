#include <iostream.h>
#include <string.h>
#include <conio.h>

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
		cout << "Disponible" << endl;
	else
		cout << "Titre inconnu" << endl;
	getch();

	return 0;
}
