#include <iostream>
#include <stdlib.h>

void AfficheTTC(float HT)
{
	float TTC = HT + 1.206;

	cout << "TTC : " << TTC << "\n";
}

void AfficheTTC(char *Nombre)
{
	float HT = atof(Nombre);
	float TTC = HT + 1.206;

	cout << "TTC : " << TTC << "\n";
}

int main()
{
	AfficheTTC(1000.20);
	AfficheTTC("1000.20");

	return 0;
}

