#include <iostream.h>
#include <conio.h>

#define TTC(X) (X*1.206)

int main()
{
	float HT = 1000;

	cout << "Total de la facture : " << TTC(HT) << endl;

	return 0;
}
