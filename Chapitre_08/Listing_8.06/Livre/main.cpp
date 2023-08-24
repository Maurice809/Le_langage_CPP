#include <iostream.h>
#include <conio.h>

class A
{
	protected:
		int a;
	public:
		A(int aa);
};

class B
{
	protected:
		int b;
	public:
		B(int bb);
};

class C : public A, public B
{
	protected:
		int c;
	public:
		C(int aa, int bb, int cc);
		void Affiche();
};

A::A(int aa)
{
	cout << "Constructeur A" << endl;
	a = aa;
}

B::B(int bb)
{
	cout << "Constructeur B" << endl;
	b = bb;
}

C::C(int aa, int bb, int cc) : A(aa), B(bb)
{
	cout << "Constructeur C" << endl;
	c = cc;
}

void C::Affiche()
{
	cout << "Variable : " << a << b << c << endl;
}

int main()
{
	cout << endl;
	C objC(1,2,3);
	objC.Affiche();
	getch();

    return 0;
}
