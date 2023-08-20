#include <iostream.h>
#include <conio.h>

float CalculTTC(float HT);

int main()
{
	float TotalFacture;
	TotalFacture = CalculTTC(1234);
	cout << "Total facture : " << TotalFacture << endl;
	getch();

	return 0;
}

float CalculTTC(float HT)
{
	float TTC = HT * 1.206;
	return TTC;
}
