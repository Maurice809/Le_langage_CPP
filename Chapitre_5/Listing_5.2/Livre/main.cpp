#include <iostream.h>

int main()
{
	int TabEntier[5];

	cout << "Taille du Tableau   : " << sizeof(TabEntier);
	cout << "\n";
	cout << "Taille d'un element : " << sizeof(TabEntier[0]);
	cout << "\n";
	cout << "Nombre d'elements   : " << sizeof(TabEntier)/sizeof(TabEntier[0]);
	cout << "\n";

	return 0;
}
