#include <iostream>

using namespace std;

void AfficheTitre(const char *chaine)
{
	cout << endl;
	cout << "Titre : " << chaine << endl;
}

int main()
{
	AfficheTitre("Le langage C++");

	return 0;
}
