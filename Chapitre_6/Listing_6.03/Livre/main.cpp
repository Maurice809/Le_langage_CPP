#include <iostream.h>

using namespace std;

void PassageParValeur(int var)
{
	var = 10;
}
int main()
{
	int i = 0;

	PassageParValeur(i);

	cout << "Valeur de i : " << i;

	return 0;
}

