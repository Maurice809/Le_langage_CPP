#include <iostream.h>

float CalculTTC(float HT)
{
	float TTC = HT * 1.206;
	return TTC;
}

int main()
{
	float TotalFacture;

	TotalFacture = CalculTTC(1234);

	cout << "Total facture : " << TotalFacture << '\n';

	return 0;
}
