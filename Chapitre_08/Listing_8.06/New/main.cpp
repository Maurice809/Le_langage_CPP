#include <iostream>

using namespace std;

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
};

A::A(int aa)
{
	cout << "Constructeur A" << endl;
}

B::B(int bb)
{
	cout << "Constructeur B" << endl;
}

C::C(int aa, int bb, int cc) : A(aa), B(bb)
{
	cout << "Constructeur C" << endl;
}

int main()
{
	cout << endl;
	C objC(1,2,3);

    return 0;
}
