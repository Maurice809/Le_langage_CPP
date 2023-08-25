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

class Imprimante : public Materiel
{
    protected:
        char Type[20+1];
    public:
        Imprimante(const char *r, const char *m, const char *t);
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
    cout << " Processeur : 0" << Processeur;
    cout << " Disque : " << Disque;
    cout << endl;
}

Imprimante::Imprimante(const char *r,const char *m, const char *t)
           :Materiel(r,m)
{
    strcpy(Type, t);
}

void Imprimante::Affiche()
{
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marques;
    cout << " Type : " << Type;
    cout << endl;
}

int main()
{
    Materiel *pMat = NULL;
    int TypeObjet = 0;

    while (42)
    {
        cout << endl << "Choisissez un type de materiel" << endl;
        cout << "(1 - Micro, 2 - Imprimante, 0 - pour quitter) :";
        cin >> TypeObjet;

        switch (TypeObjet)
        {
        case 1 : pMat = new Micro("X18", "PH", "DX4-100", 200);
            break;
        case 2 : pMat = new Imprimante("x18", "PH", "Laser");
            break;
        case 0 : if (pMat != NULL) delete pMat;
            return 0;
        default: cout << endl << "Choix invalide\a" << endl;
            continue;
        }
        cout << endl;
        pMat->Affiche();
        delete pMat;
        pMat = NULL;
    }
    
    return 0;
}