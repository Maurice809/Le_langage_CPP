#include <iostream.h>
#include <conio.h>

class Micro
{
	public:
		Micro();
		~Micro();
};

Micro::Micro()
{
	cout << "Constructeur Micro : " << this << endl;
}

Micro::~Micro()
{
	cout << "Destructeur  Micro : " << this << endl;
}

int main()
{
	cout << endl;
	Micro Mic;
	Micro *pMic;

	pMic = new Micro;
	delete pMic;

	pMic = new Micro;
	delete pMic;
	getch();

	return 0;
}
