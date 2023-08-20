#include <iostream>
#include <conio.h>

void Etoile(int NbrEtoiles)
{
	int i = 0;
	while (i < NbrEtoiles)
	{
		cout << '*';
		i++;
	}
}

int main()
{
	cout << "Etoiles " << endl;
	Etoile(0);
	cout << endl;
	Etoile(1);
	cout << endl;
	Etoile(2);
	cout << endl;
	Etoile(3);
	cout << endl;
	Etoile(4);
	cout << endl;

	return 0;
}
