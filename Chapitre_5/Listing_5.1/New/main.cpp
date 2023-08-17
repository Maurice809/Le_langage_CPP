#include <iostream>

#define MAXENTIER 5

using namespace std;

int main()
{
	int TabEntier[MAXENTIER];
	int i = -1;

	while (++i<MAXENTIER)
	{
		TabEntier[i] = i+1 ;
	}

	cout << endl << "TabEntier : ";

	i = -1;
	while (++i<MAXENTIER)
	cout << TabEntier[i] << " ";
	cout << endl;

	return 0;
}
