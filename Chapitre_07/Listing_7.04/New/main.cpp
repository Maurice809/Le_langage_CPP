#include <iostream>

using namespace std;

class Facture
{
	public:
		float TauxTVA1;
		float TauxTVA2;

		Facture(float tauxtva1, float tauxtva2);

};

Facture::Facture(float tauxtva1, float tauxtva2) : TauxTVA1(tauxtva1), TauxTVA2(tauxtva2)
{
	/*
	indentique a
		TauxTVA1 = tauxtva1;
		TauxTVA2 = tauxtva2;
	*/
}

int main()
{
	Facture Mic(20.6,5.5);

	cout << endl;
	cout << "Taux1 : " << Mic.TauxTVA1 << endl;
	cout << "Taux2 : " << Mic.TauxTVA2 << endl;

	return 0;
}
