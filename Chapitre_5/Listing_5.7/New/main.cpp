#include <iostream>
// Bibliotehque C pour string
#include <cstring>

using namespace std;

int main()
{
	char Titre[40+1];

	// copie un chaine de caratere
	strcpy(Titre, "Le Tout en Poche Langage C++");

	//Affichage
	cout << endl;
	cout << "String comptette" << endl;
	cout << "Titre      : " << Titre << endl;
	cout << endl;

	//couper la chaine
	Titre[16] = '\0';

	//Affichage
	cout << endl;
	cout << "String chaine coupe" << endl;
	cout << "Titre      : " << Titre << endl;
	cout << endl;

	return 0;
}
