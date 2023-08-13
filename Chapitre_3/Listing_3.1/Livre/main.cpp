#include <iostream.h>

float TauxTVA = 20.6;

float CalculTTC(float HT)
{
	float TTC = HT + (HT * (TauxTVA/100));
	return TTC;
}

int main()
{
	float TotalFacture;
	cout << "Taux de TVA : " << TauxTVA << '\n';

	TotalFacture = CalculTTC(100);
	cout << "Total facture : " << TotalFacture << '\n';

	return 0;
}
