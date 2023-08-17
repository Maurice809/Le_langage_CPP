#include <iostream>

using namespace std;

int main()
{
	int TabEntier[5];

	cout << endl;
	cout << "Taille du Tableau   : " << sizeof(TabEntier) << endl;
	cout << "Taille d'un element : " << sizeof(TabEntier[0]) << endl;
	cout << "Nombre d'elements   : " << sizeof(TabEntier)/sizeof(TabEntier[0]) << endl;

	return 0;
}
