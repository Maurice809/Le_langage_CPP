#include <iostream.h>

class A
{
	protected:
		int a;
	public:
		A(int aa);
};

class B : virtual public A
{
	protected:
		int b;
	public:
		B(int aa, int bb);
};

class C : virtual public A
{
	protected:
		int c;
	public:
		C(int aa, int cc);
};

class D : public B, public C
{
	protected:
		int d;
	public:
		D(int bb, int cc, int dd);
		void Affiche();
};

A::A(int aa)
{
	cout << "Constructeur A" << endl;
	a = aa;
}

B::B(int aa, int bb) : A(aa)
{
	cout << "Constructeur B" << endl;
	b = bb;
}

C::C(int aa, int cc) : A(aa)
{
	cout << "Constructeur C" << endl;
	c = cc;
}

D::D(int bb, int cc, int dd) : A(0), B(bb, 0), C(cc, 0)
{
	cout << "Constructeur D" << endl;
	d = dd;
}

void D::Affiche()
{
	cout << "Variable : " << a << b << c << d << endl;
}


int main()
{
	cout << endl;
	D objC(0,0,5);
	cout << endl;
	objC.Affiche();

    return 0;
}
