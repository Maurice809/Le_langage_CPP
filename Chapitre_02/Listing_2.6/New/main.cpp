#include <iostream>

using namespace std;

float CalculTTC(float HT);

int main()
{
	float TotalFacture;
	TotalFacture = CalculTTC(1234);
	cout << endl << "Total facture : " << TotalFacture << endl;

	return 0;
}

float CalculTTC(float HT)
{
	float TTC = HT * 1.206;
	return TTC;
}
