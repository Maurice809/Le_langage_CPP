#include <iostream.h>
#include <conio.h>

void PassageParValeur(int &var)
{
	var = 10;
}
int main()
{
	int i = 0;

	PassageParValeur(i);

	cout << "Valeur de i : " << i;
	getch();

	return 0;
}

