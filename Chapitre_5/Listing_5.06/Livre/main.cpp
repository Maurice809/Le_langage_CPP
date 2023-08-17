#include <iostream.h>
#include <cstring.h>

int main()
{
	char Titre[40+1];

	strcpy(Titre, "Langage C++");

	cout << "Titre      : " << Titre << endl;

	Titre[0] = '\0'; // strcpy(Titre,"");

	cout << "Collection : " << Collection << endl;
	cout << "Titre      : " << Titre << endl;

	return 0;
}
