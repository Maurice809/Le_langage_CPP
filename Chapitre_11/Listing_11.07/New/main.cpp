#include <iostream>

using namespace std;

class Moteur
{
    public:
        void Demarrer()
        {
            cout << "Le moteur demarre" << endl;
        }
        void Arreter()
        {
            cout << "Le moteur est arrete" << endl;
        }
        Moteur()
        {
            cout << "Creation du moteur" << endl;
        }
        virtual ~Moteur()
        {
            cout << "Destruction du moteur" << endl;
        }
};

class Garage
{
    public:
        void Ouvrir()
        {
            cout << "Ouvrir le garage" << endl;
        }
        void Fermer()
        {
            cout << "Fermer le garage" << endl;
        }
        Garage()
        {
            cout << "Creation du garage" << endl << endl;
        }
        ~Garage()
        {
            cout << "Destruction du garage" << endl;
        }
};

class Voiture
{
    private:
        Garage *garage; // garage de la voiture (association)
        Moteur moteur; //Moteur dela voiture (agregation)
    public:
    void Demarrer();
    void Arreter();

    void RangerDansGarage();
    void SotirDuGarage();

    Voiture(Garage *garage);
    virtual ~Voiture();
};

void Voiture::Demarrer()
{
    moteur.Demarrer();
    cout << "La voiture demarre" << endl << endl;
}

void Voiture::Arreter()
{
    moteur.Arreter();
    cout << "La voiture est arrete" << endl << endl;   
}

void Voiture::RangerDansGarage()
{
    garage->Ouvrir();
    cout << "La voiture entre dans le garage" << endl;
    garage->Fermer();
    cout << "La voiture est dans le garage" << endl << endl;
}

void Voiture::SotirDuGarage()
{
    garage->Ouvrir();
    cout << "La voiture sort du garage" << endl;
    garage->Fermer();
    cout << "La voiture est sortie du garage" << endl << endl; 
}

Voiture::Voiture(Garage *g)
{
    cout << "Creation d'une voiture" << endl << endl;
}

Voiture::~Voiture()
{
    cout << "Destruction de la voiture" << endl;
}
int main()
{   
    Garage garage;
    Voiture v(&garage);

    v.Demarrer();
    v.SotirDuGarage();
    v.RangerDansGarage();
    v.Arreter();

    return 0;
}