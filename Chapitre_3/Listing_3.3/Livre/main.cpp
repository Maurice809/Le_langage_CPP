#include <iostream>
#include <conio.h>

extern float TauxTVA;

// Prototype de la fonction
float CalculTTC(float HT);

int main()
{
	float TotalFacture;
	cout << "Taux de TVA : " << TauxTVA << endl;

	TotalFacture = CalculTTC(100);
	cout << "Total facture : " << TotalFacture << endl;
	return 0;
}
