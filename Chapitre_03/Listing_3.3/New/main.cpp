#include <iostream>

using namespace std;

extern float TauxTVA;

// Prototype de la fonction
float CalculTTC(float HT);

int main()
{
	float TotalFacture;
	cout << endl << "Taux de TVA : " << TauxTVA << endl;

	TotalFacture = CalculTTC(100);
	cout << "Total facture : " << TotalFacture << endl;
	return 0;
}
