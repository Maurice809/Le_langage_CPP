#include <iostream>
#include <cstring>

using namespace std;

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
        Micro(const char *r="", const char *m="", const char *p="", int d=0);
        virtual void Affiche();

        void SetDisque(int disque)
        {
            Disque = disque;
        }
        
        int Getdisque()
        {
            return Disque;
        }
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

int main()
{
    int NbrElement;

    // Saisie du nombre d'elements
    cout << "Nombre de micro : ";
    cin >> NbrElement;
    cout << endl;

    // Creer
    Micro *pMic = new Micro[NbrElement];

    // modifier
    for (int i = 0; i<NbrElement; i++)
    {
        pMic[i].SetDisque(i);
    }

    // Afficher
    for (int i = 0; i<NbrElement; i++)
    {
        pMic[i].Affiche();
    }

    //Detruire
    delete[] pMic;

    return 0;
}