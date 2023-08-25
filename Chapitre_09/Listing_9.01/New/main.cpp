#include <iostream>
#include <cstring>

using namespace std;

class Materiel
{
    protected:
        char Reference[20+1];
        char Marques[20+1];
    public:
        Materiel(const char *r, const char *m);
        virtual void Affiche();
};

class Micro : public Materiel
{
    protected:
        char Processeur[20+1];
        int Disque;
    public:
        Micro(const char *r, const char *m, const char *p, int d);
        virtual void Affiche();
};

Materiel::Materiel(const char *r, const char *m)
{
    strcpy(Reference, r);
    strcpy(Marques, m);
}

void Materiel::Affiche()
{
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marques;
    cout << endl;
}

Micro::Micro(const char *r, const char *m, const char *p, int d) 
      :Materiel(r,m)
{
    strcpy(Processeur, p);
    Disque = d;
}

void Micro::Affiche()
{
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marques;
    cout << " Processeur :" << Processeur;
    cout << " Disque : " << Disque;
    cout << endl;
}

int main()
{
    Materiel *pMat;

    cout << endl;
    pMat = new Materiel("X01", "XX");
    pMat->Affiche();
    delete pMat;

    pMat = new Micro("X16", "PH", "DX4-100", 200);
    pMat->Affiche();
    delete pMat;

    return 0;
}