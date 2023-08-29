#include <iostream>
#include <cstring.h>
#include <conio.h>

#define MAX 5

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
    // Creer
    Micro Mic[MAX];

    // Modifier
    for (int i = 0; i<MAX; i++)
        Mic[i].SetDisque(i);
    
    //Afficher
    for (int i = 0; i<MAX; i++)
        Mic[i].Affiche();
    getch();

    return 0;
}