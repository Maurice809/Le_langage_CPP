#include <iostream.h>
#include <conio.h>

float TauxTVA = 20.6;

float CalculTTC(float HT)
{
	float TTC = HT + (HT * (TauxTVA/100));
	return TTC;
}

int main()
{
	float TotalFacture;
	cout << "Taux de TVA : " << TauxTVA << endl;

	TotalFacture = CalculTTC(100);
	cout << "Total facture : " << TotalFacture << endl;
	getch();

	return 0;
}
