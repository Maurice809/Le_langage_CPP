#include <iostream.h>
#include <conio.h>

void AfficheTitre(char *chaine)
{
	cout << "Titre : " << chaine << endl;
}

int main()
{
	AfficheTitre("Le langage C++");
	getch();

	return 0;
}
