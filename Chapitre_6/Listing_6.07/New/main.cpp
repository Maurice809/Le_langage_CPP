#include <iostream>

using namespace std;

void AfficheTTC(float HT, float TauxTVA = 0.206)
{
	float TTC = HT * (1 + TauxTVA);

	cout << endl;
	cout << "TTC : " << TTC << endl;
}

int main()
{
	AfficheTTC(1000.20);
	AfficheTTC(1000.20, 0.055);

	return 0;
}

