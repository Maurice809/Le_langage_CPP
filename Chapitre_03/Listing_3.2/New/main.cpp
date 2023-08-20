#include <iostream>

using namespace std;

int Compteur()
{
	static int i = 0;
	i++;
	return i;
}

int main()
{
	int Res;

	Res = Compteur();
	cout << endl << "Res : " << Res << endl;

	Res = Compteur();
	cout << "Res : " << Res << endl;

	return 0;
}
