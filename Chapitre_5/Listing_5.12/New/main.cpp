#include <iostream>

using namespace std;

int main()
{
	// Declartion
	int a;		// entier
	int *p;		// pointeur vers un entier

	// Initialisation
	a = 12;
	p = &a;

	// Utilisation du pointeur
	*p = 15;

	// Affichage
	cout << endl;
	cout << "a  : " << a << endl;
	cout << "*p : " << *p << endl;

	return 0;
}
