#include <iostream.h>
#include <conio.h>

int main()
{
	// Declartion
	int a;		// entier
	int * p;		// pointeur vers un entier

	// Initialisation
	a = 12;
	p = &a;

	// Utilisation du pointeur
	*p = 15;

	// Affichage
	cout << "a  : " << a << "\n";
	cout << "*p : " << *p << "\n";
	getch();

	return 0;
}
