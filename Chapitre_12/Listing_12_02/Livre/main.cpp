#include <iostream>
#include <cstring>

class Voiture
{
    protected:
        char Marque[20+1];
        char Modele[20+1];
        char Prix  [20+1];
    public:
        Voiture(const char *ma="", const char *mo="", const char *pr="");
        virtual void Afficher();
        virtual void Saisir();
};

Voiture::Voiture(const char *ma, const char *mo, const char *pr)
{
    strcpy(Marque, ma);
    strcpy(Modele, mo);
    strcpy(Prix, pr);
}

void Voiture::Afficher()
{
    cout << endl;

    cout.setf(ios::left, ios::adjustfield);
    cout << " Marque : ";
    cout.width(20);
    cout << Marque;
    cout << " Modele : ";
    cout.width(20);
    cout << Modele;
    cout << " Prix : ";
    cout.width(20);
    cout << Prix;

    cout << endl; 
}

void Voiture::Saisir()
{
    cout << " Marque : ";
    cin.getline(Marque, sizeof(Marque));
    cout << " Modele : ";
    cin.getline(Modele, sizeof(Modele));
    cout << " Prix : ";
    cin.getline(Prix, sizeof(Prix));
}

int main()
{
    Voiture UneVoiture;
    cout << endl;
    UneVoiture.Saisir();

    cout.width(80);
    cout.fill('-');
    cout.setf(ios::left, ios::adjustfield);
    cout << endl << " Affichage " << endl;
    cout.fill(' ');
    UneVoiture.Afficher();

    return 0;
}
