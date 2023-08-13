#include <iostream>

#define TTC(X) (X*1.206)

using namespace std;

int main()
{
	float HT = 1000;

	cout << endl << "Total de la facture : " << TTC(HT) << endl;

	return 0;
}
