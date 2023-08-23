#include <iostream>

using namespace std;

class Materiel
{
    public:
        char Reference[20+1];
        char Marque[20+1];
};

class Micro : public Materiel
{
    public:
        char Processeur[20+1];
        int Disque;

        void Affiche();
};

void Micro::Affiche()
{
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marque;
    cout << " Processeur : " << Processeur;
    cout << " Disque : " << Disque;
    cout << endl;
}

int main()
{
    Micro   *pMic;
    pMic = new Micro;

    strcpy(pMic->Reference, "X15");
    strcpy(pMic->Marque, "ELX");
    strcpy(pMic->Processeur, "PIII");
    pMic->Disque = 400;

    cout << endl;
    pMic->Affiche();
    cout << endl;

    return 0;
}