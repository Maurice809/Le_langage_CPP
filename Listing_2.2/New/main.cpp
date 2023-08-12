#include <iostream>

using namespace std;

void AfficheTTC(float HT)
{
	float TTC = HT * 1.206;
	cout << "TTC : " << TTC << endl;
}

int main()
{
	float TotalFactureHT = 1000;

	AfficheTTC(TotalFactureHT);

	AfficheTTC(1234);

	return 0;
}
