#include <iostream.h>
#include <string.h>

using namespace std;

int main()
{
	char Titre[40+1];

	strcpy(Titre, "Le Tout en Poche Langage C++");

	cout << "Titre      : " << Titre << "\n";

	Titre[16] = '\0';

	cout << "Titre      : " << Titre << "\n";
	int i;
	cin >> i;

	return 0;
}
