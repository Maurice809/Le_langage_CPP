#include <iostream.h>

bool Confirmer()
{
	char c;

	while (1)
	{
		cout << "Confirmer (o/n) :";

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

int main(void)
{
	if (Confirmer()==true)
		cout << "Operation confirmee";
	else
		cout << "Opertation annulee";
	return 0;
}
