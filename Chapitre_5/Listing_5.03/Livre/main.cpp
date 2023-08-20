#include <iostream>
#include <conio.h>

int main()
{
	// tableu a deux dimension
	int Echiquier[8][8];
	// Varible de compteur
	int y = -1;
	int x = -1;

	// remplissage du tableau
	while(++y < 8)
	{
		while(++x < 8)
		{
			// determination d'un case paire
			if ((y+x) % 2 == 0)
				Echiquier[y][x] = 0;
			else
				Echiquier[y][x] = 1;
		}
		x = -1;
	}
	y = -1;

	// Affichage du tableau
	cout << endl;
	cout << "Affiche le tableau : " << endl << endl;
	while(++y < 8)
	{
		while (++x < 8)
		{
			cout << Echiquier[y][x] << " ";
		}
		cout << endl;
		x = -1;
	}
	getch();

	return 0;
}
