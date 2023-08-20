#include <iostream.h>
#include <conio.h>

int Compteur()
{
	static int i = 0;
	i++;
	return i;
}

int main(void)
{
	int Res;

	Res = Compteur();
	cout << "Res : " << Res << endl;

	Res = Compteur();
	cout << "Res : " << Res << endl;
	getch();

	return 0;
}
