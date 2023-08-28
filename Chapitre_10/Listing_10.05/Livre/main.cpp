#include <iostream.h>
#include <conio.h>

class Nombre
{
		int Valeur;
	public:
		Nombre(int valeur);
		int operator + (Nombre b);
};

Nombre::Nombre(int valeur)
{
	Valeur = valeur;
}

int Nombre::operator + (Nombre b)
{
	return (this->Valeur + b.Valeur);
}

int main()
{
	Nombre A(100);
	Nombre B(200);

	cout << endl;
	cout << "Total : " << (A+B) << endl;
	getch();

    return 0;
}
