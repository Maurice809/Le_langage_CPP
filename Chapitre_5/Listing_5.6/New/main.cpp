#include <iostream>
// Bibliotehque C pour string
#include <cstring>

using namespace std;

int main()
{
	char Collection[40+1];
	char Titre[40+1];

	// copie un chaine de caratere
	strcpy(Collection,"Le Tout en Poche");
	strcpy(Titre, "Langage C++");

	//Affichage
	cout << endl;
	cout << "String pleine" << endl;
	cout << "Collection : " << Collection << endl;
	cout << "Titre      : " << Titre << endl;
	cout << endl;

	//Deux methode de vidage
	Collection[0] = '\0';
	strcpy(Titre,"");

	//Affichage
	cout << endl;
	cout << "String vide" << endl;
	cout << "Collection : " << Collection << endl;
	cout << "Titre      : " << Titre << endl;
	cout << endl;

	return 0;
}
