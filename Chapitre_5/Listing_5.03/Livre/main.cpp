#include <iostream.h>

int main()
{
	// tableu a deux dimension
	int Echiquier[8][8];

	Echiquier[0][0] = 2; // A1 : Tour palcee premiere colonne

	Echiquier[0][1] = 3; // B1 : Cavalier placee deuxieme colonne

	// initialisation deuxieme ligne
	Echiquier[1][0] = 1; // A2 : Pion place premiere colonne

	Echiquier[1][1] = 1; // B2 : Pion place premiere colonne

	return 0;
}
