#include <iostream.h>

#define TTC(X) (X*1.206)

int main()
{
	float HT = 1000;

	cout << "Total de la facture : " << TTC(HT) << '\n';

	return 0;
}
