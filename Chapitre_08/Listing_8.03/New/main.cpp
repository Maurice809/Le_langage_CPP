#include <iostream>

using namespace std;

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
	cout << endl;
	cout << " i : " << i << endl;
	cout << " j : " << j << endl;
	cout << " z : " << z << endl;
	cout << endl;
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

    return 0;
}
