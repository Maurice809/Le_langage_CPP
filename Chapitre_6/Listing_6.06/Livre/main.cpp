#include <iostream>
#include <stdlib.h>

void AfficheTTC(float HT)
{
	float TTC = HT + 1.206;

	cout << endl;
	cout << "TTC : " << TTC << endl;
}

void AfficheTTC(char *Nombre)
{
	float HT = atof(Nombre);
	float TTC = HT + 1.206;

	cout << endl;
	cout << "TTC : " << TTC << endl;
}

int main()
{
	AfficheTTC(1000.20);
	AfficheTTC("1000.20");

	return 0;
}

