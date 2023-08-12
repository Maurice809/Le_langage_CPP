#include <iostream.h>

int Addition(int a, int b)
{
	int Res;
	Res = a + b;
	return Res;
}

int main()
{
	int Resultat;

	Resultat = Addition(4,5);

	cout << 'Resultat : ' << Resultat << '\n';

	return 0;
}
