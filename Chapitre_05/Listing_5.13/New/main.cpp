#include <iostream>

using namespace std;

void CalculTTC(float *Montant)
{
	float HT = *Montant;
	*Montant = HT * 1.206;
}

int main()
{
	float TotalFacture = 1000;

	CalculTTC(&TotalFacture);

	cout << endl;
	cout << "Total facture : " << TotalFacture << endl;

	return 0;
}
