#include <iostream>

using namespace std;

void PassageParValeur(int *var)
{
	*var = 10;
}
int main()
{
	int i = 0;

	PassageParValeur(&i);

	cout << endl;
	cout << "Valeur de i : " << i << endl;

	return 0;
}

