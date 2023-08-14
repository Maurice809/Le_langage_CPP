#include <iostream>

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
	cout << "Etoiles " << '\n';
	Etoile(0);
	cout << '\n';
	Etoile(1);
	cout << '\n';
	Etoile(2);
	cout << '\n';
	Etoile(3);
	cout << '\n';
	Etoile(4);
	cout << '\n';

	return 0;
}
