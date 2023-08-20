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
	cout << "Collection : " << Collection << endl;
	cout << "Titre      : " << Titre << endl;
	cout << endl;

	// Ajoute une string a la d'une string
	strcat(Collection," -> ");
	strcat(Collection,Titre);

	cout << "Reference ouvrage : " << Collection << endl;

	return 0;
}
