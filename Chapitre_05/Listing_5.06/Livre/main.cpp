#include <iostream.h>
#include <string.h>
#include <conio.h>

int main()
{
	char Titre[40+1];

	strcpy(Titre, "Le Tout en Poche Langage C++");

	cout << "Titre      : " << Titre << endl;

	Titre[0] = '\0'; // strcpy(Titre,"");

	cout << "Titre      : " << Titre << endl;
	getch();

	return 0;
}
