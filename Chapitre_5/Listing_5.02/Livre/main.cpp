#include <iostream.h>
#include <conio.h>

int main()
{
	int TabEntier[5];

	cout << "Taille du Tableau   : " << sizeof(TabEntier);
	cout << endl;
	cout << "Taille d'un element : " << sizeof(TabEntier[0]);
	cout << endl;
	cout << "Nombre d'elements   : " << sizeof(TabEntier)/sizeof(TabEntier[0]);
	cout << endl;
	getch();

	return 0;
}
