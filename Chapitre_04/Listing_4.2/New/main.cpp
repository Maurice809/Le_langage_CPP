#include <iostream>

using namespace std;

float MontantCredit(int CodeClient)
{
	float Credit;
	switch (CodeClient)
	{
		case 0	:	Credit = 10000.00;
					break;
		case 1	:	Credit = 30000.00;
					break;
		case 2	:	Credit = 50000.00;
					break;
		default	:	Credit = 0;
	}
	return Credit;
}

int main()
{
	cout << endl;
	cout << "Credit : " << MontantCredit(0) << endl;
	cout << "Credit : " << MontantCredit(1) << endl;
	cout << "Credit : " << MontantCredit(2) << endl;
	cout << "Credit : " << MontantCredit(3) << endl;

	return 0;
}
