#include <iostream>

using namespace std;

bool Confirmer()
{
	char c;

	while (42)
	{
		cout << "Confirmer (o/n) : ";
		cin >> c;

		switch(c)
		{
			case	'o'	:
			case	'O'	: return true;
			case	27	:
			case	'n'	:
			case	'N'	: return false;
		}
	}
}

int main()
{
	if (Confirmer()==true)
		cout << "Operation confirmee";
	else
		cout << "Opertation annulee";
	return 0;
}
