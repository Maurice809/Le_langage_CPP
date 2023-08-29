#include <iostream>
#include <conio.h>

class Voiture
{
    public:
        class Moteur
        {
            public:
                void Demarre();
        };
        void Contact();
};

void Voiture::Contact()
{
    cout << endl;
    cout << "Contact" << endl;
    Moteur moteur;
    moteur.Demarre();
}

void Voiture::Moteur::Demarre()
{
    cout << "Moteur demarre" << endl;
}

int main()
{
    Voiture TC;
    TC.Contact();
    getch();
    
    return 0;
}