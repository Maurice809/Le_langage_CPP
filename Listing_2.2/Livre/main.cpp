#include <iostream.h>

void AfficheTTC(float HT)
{
	float TTC = HT * 1.206;
	cout << "TTC : " << TTC << '\n';
}

int main(void)
{
	float TotalFactureHT = 1000;

	AfficheTTC(TotalFactureHT);

	AfficheTTC(1234);

	return 0;
}
