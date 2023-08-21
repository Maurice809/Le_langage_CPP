#include <iostream.h>
#include <string.h>
#include <conio.h>

class Micro
{
	private:
		char References[20+1];
		char Marque[20+1];
		char Processeur[20+1];
		int Disque;
	public:
		Micro(const char *r="", const char *m="", const char *p="", int d=0);
		int GetDisque();
		void SetDisque(int d);
};

Micro::Micro(const char *r, const char *m, const char *p, int d)
{
	strcpy(References, r);
	strcpy(Marque, m);
	strcpy(Processeur, p);
	Disque = d;
}

int Micro::GetDisque()
{
	return Disque;
}

void Micro::SetDisque(int d)
{
	Disque = d;
}

int main()
{
	Micro Mic("X16", "PH", "DX4-100", 200);

	cout << endl;
	cout << "Disque : " << Mic.GetDisque() << endl;
	Mic.SetDisque(300);
	cout << "Disque : " << Mic.GetDisque() << endl;
	getch();

	return 0;
}
