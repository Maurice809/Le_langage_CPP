#include <iostream>

using namespace std;

int main()
{
	short Nombre = 1000;
	short *p;

	p = &Nombre;

	cout << endl;
	cout << "Adresse p   : " << p << endl;
	cout << "Adresse p+1 : " << (p+1) << endl;
	cout << "Adresse p+2 : " << (p+2) << endl;

	return 0;
}
