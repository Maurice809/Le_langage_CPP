#include <iostream.h>
#include <conio.h>

class A
{
	public:
		int i;
	protected:
		int j;
	private:
		int z;
	public:
		A();
		void Affiche();
};

class B : public A
{
	public:
		void Utilise();
};

A::A()
{
	i = 1;
	j = 2;
	z = 3;
}

void A::Affiche()
{
	cout << " i : " << i << endl;
	cout << " j : " << j << endl;
	cout << " z : " << z << endl;
}

void B::Utilise()
{
	i = 4;
	j = 5;
	// z = 8; // impossible, car z est privee

	Affiche();
}

int main()
{
	B b;

	b.Utilise();
	getch();

    return 0;
}
