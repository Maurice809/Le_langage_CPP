#include <iostream.h>
#include <string.h>

#define MAX 10

class Materiel
{
    protected:
        char Reference[20+1];
        char Marque[20+1];
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

class ParcMateriel
{
    private:
        Materiel *Liste[MAX];
    
    public:
        ParcMateriel();
        virtual ~ParcMateriel();
        int Ajouter(Materiel *pmat);
        void AfficherTout();
};

 Materiel::Materiel(const char *r, const char *m)
{
    strcpy(Reference, r);
    strcpy(Marque, m);
}

void Materiel::Affiche()
{
    cout << endl;
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marque;
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
    cout << endl;
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marque;
    cout << " Processeur : " << Processeur;
    cout << " Disque : " << Disque;
    cout << endl;
}

Imprimante::Imprimante(const char *r, const char *m, const char *t)
           :Materiel(r,m)
{
    strcpy(Type, t);
}

void Imprimante::Affiche()
{
    cout << endl;
    cout << " Ref : " << Reference;
    cout << " Marque : " << Marque;
    cout << " Type : " << Type;
    cout << endl;
}

ParcMateriel::ParcMateriel()
{
    for (int i = 0; i<MAX; i++)
        Liste[i] = NULL;
}

int ParcMateriel::Ajouter(Materiel *pmat)
{
    for (int i = 0; i<MAX; i++)
    {
        if (Liste[i] == NULL)
        {
            Liste[i] = pmat;
            return 1;
        }
    }
    cout << "Tableau plein\a" << endl;

    return 0;
}

void ParcMateriel::AfficherTout()
{
    for (int i = 0; i<MAX; i++)
    {
        if (Liste[i] != NULL)
            Liste[i]->Affiche();
    }
}

ParcMateriel::~ParcMateriel()
{
    for (int i = 0; i<MAX; i++)
    {
        if (Liste[i] != NULL)
        {
            delete Liste[i];
        }
    }
}

int main()
{
    ParcMateriel Parc;
    Materiel *pMat = NULL;
    int TypeObjet = 0;

    while (42)
    {
        cout << endl;
        cout << "Choisissez un type de materiel " << endl;
        cout << "(1 -Micro, 2 -Imprimante, 3 -Afficher Parc, 0 -Quitter): ";
        cin >> TypeObjet;

        switch (TypeObjet)
        {
        case 1 : pMat = new Micro("X16", "PH", "DX4-100", 200);
                 Parc.Ajouter(pMat);
                 break;
        case 2 : pMat = new Imprimante("X18", "PH", "Laser");
                 Parc.Ajouter(pMat);
                 break;
        case 3 : Parc.AfficherTout();
                 break;
        case 0 : return 0;
        default: cout << endl << "Choix invalide\a" << endl;
                 continue;
        }
    }
}