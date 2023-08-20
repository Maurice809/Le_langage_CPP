#include <iostream.h>
#include <string.h>
#include <conio.h>

int main()
{
	char Collection[40+1];
	char Titre[40+1];

	strcpy(Collection,"Le Tout en Poche");
	strcpy(Titre, "Langage C++");

	cout << "Collection : " << Collection << '\n';
	cout << "Titre      : " << Titre << "\n";

	strcat(Collection,"->");
	strcat(Collection,Titre);

	cout << "Reference ouvrage : " << Collection << "\n";
	getch();

	return 0;
}
