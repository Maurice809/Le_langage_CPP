#include <iostream>
#include <conio.h>

int main()
{
	char Titre[40+1];

	Titre[0] = 'C';
	Titre[1] = '+';
	Titre[2] = '+';
	Titre[3] = '\0';

	cout << "Langage " << Titre;
	getch();

	return 0;
}
