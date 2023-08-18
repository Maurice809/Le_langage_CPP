#include <iostream.h>

void CalculTTC(float *Montant)
{
	float HT = *Montant;
	*Montant = HT * 1.206;
}

int main()
{
	float TotalFacture = 1000;

	CalculTTC(&TotalFacture);

	cout << "Total facture : " << TotalFacture << "\n";

	return 0;
}
