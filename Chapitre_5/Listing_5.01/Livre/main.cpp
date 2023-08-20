#include <iostream>
#include <conio.h>

#define MAXENTIER 5

int main()
{
	int TabEntier[MAXENTIER];
	int i = -1;

	while (++i<MAXENTIER)
	{
		TabEntier[i] = i+1 ;
	}

	cout << "TabEntier : ";

	i = -1;
	while (++i<MAXENTIER)
	cout << TabEntier[i] << " ";
	cout << endl;
	getch();

	return 0;
}
