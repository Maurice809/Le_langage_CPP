#include <iostream>

using namespace std;

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

	cout << endl << "Resultat : " << Resultat << endl;

	return 0;
}
