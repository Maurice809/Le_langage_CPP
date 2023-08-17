#include <iostream>

using namespace std;

int main()
{
	char Titre[40+1];

	Titre[0] = 'C';
	Titre[1] = '+';
	Titre[2] = '+';
	Titre[3] = '\0';

	cout << endl;
	cout << "Langage " << Titre;
	cout << endl;

	return 0;
}
