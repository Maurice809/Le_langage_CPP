#include <iostream.h>
#include <conio.h>

int main(void)
{
	short TypeMateriel = 0;

	cout << endl << "Chossiez un type de materiel (0,1,2,...) : " ;
	cin >> TypeMateriel;

	if (TypeMateriel >= 1)
	{
		cout << "Vous avez selectionne";
		if (TypeMateriel < 3)
		{
			cout << " un ordinateur";
			if (TypeMateriel == 1)
				cout << ".";
			else
				cout << " portable.";
		}
		else
		{
			if (TypeMateriel == 3)
				cout << " une imprimante.";
			else
				cout << " un materiel autre qu'un ordinateur ou qu'une imprimante.";
		}
	}
	else
		cout << "Materiel non disponible";
	getch();

	return 0;
}
