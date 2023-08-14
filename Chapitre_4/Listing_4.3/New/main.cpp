#include <iostream>

using namespace std;

void Etoile(int NbrEtoiles)
{
	int i = -1;
	while (++i < NbrEtoiles)
	{
		cout << '*';
	}
	cout << endl;
}

int main()
{
	cout << endl;
	cout << "Etoiles " << endl;
	Etoile(0);
	Etoile(1);
	Etoile(2);
	Etoile(3);
	Etoile(4);

	return 0;
}
