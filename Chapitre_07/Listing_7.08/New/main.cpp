#include <iostream>
#include <cstring>

using namespace std;

class Micro
{
	private:
		char References[20+1];
		char Marque[20+1];
		char Processeur[20+1];
		int Disque;
	public:
		Micro(const char *r="", const char *m="", const char *p="", int d=0);
		int GetDisque() { return Disque; }
		void SetDisque(int d) { Disque = d; }
};

Micro::Micro(const char *r, const char *m, const char *p, int d)
{
	strcpy(References, r);
	strcpy(Marque, m);
	strcpy(Processeur, p);
	Disque = d;
}

int main()
{
	Micro Mic("X16", "PH", "DX4-100", 200);

	cout << endl;
	cout << "Disque : " << Mic.GetDisque() << endl;
	Mic.SetDisque(300);
	cout << "Disque : " << Mic.GetDisque() << endl;

	return 0;
}
