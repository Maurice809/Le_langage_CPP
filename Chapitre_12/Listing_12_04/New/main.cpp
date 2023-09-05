#include <iostream>
#include <fstream>
#include <cstring>
#include <stdio.h>

using namespace std;

class Voiture
{
    protected:
        char Marque[20+1];
        char Modele[20+1];
        char Prix  [20+1];
    public:
        Voiture(const char *ma="", const char *mo="", const char *pr="");
        virtual void Affiche();
        virtual void Saisir();

        Voiture *pSuivant; // pointeur vers l'objet suivant
    
    friend ostream& operator << (ostream& out, Voiture* v);
    friend istream& operator >> (istream& in, Voiture* v);
};

class ParcVoiture
{
    private:
        Voiture *pPremier;
        Voiture *pCourant;
    public:
        ParcVoiture();
        virtual ~ParcVoiture();
        void Ajouter(Voiture *pVoi);
        void AfficherTout();
        void Enregistrer();
        void Recuperer();
};

Voiture::Voiture(const char *ma, const char *mo, const char *pr)
{
    strcpy(Marque, ma);
    strcpy(Modele, mo);
    strcpy(Prix, pr);
    pSuivant = NULL;
}

void Voiture::Affiche()
{
    cout.setf(ios::left, ios::adjustfield);
    cout << " Marque : ";
    cout.width(20);
    cout << Marque;
    cout << " Modele : ";
    cout.width(20);
    cout << Modele;
    cout << " Prix   : ";
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
    cout << " Prix   : ";
    cin.getline(Prix, sizeof(Prix));
}

ostream& operator << (ostream& out, Voiture* v)
{
    out << v->Marque << ';';
    out << v->Modele << ';';
    out << v->Prix << ';';

    return out;
}

istream& operator >> (istream& in, Voiture* v)
    {
    in.getline( v->Marque, sizeof(v->Marque), ';' );
    in.getline(v->Modele, sizeof(v->Modele), ';');
    in.getline(v->Prix, sizeof(v->Prix), ';');

    return in;
}

ParcVoiture::ParcVoiture()
{
    pPremier = NULL;
    pCourant = NULL;
    Recuperer();
};

void ParcVoiture::Enregistrer()
{
    remove("PARCVOI>TXT");
    ofstream Fichier("PARCVOI.TXT");
    if (!Fichier) return;

    Voiture *pTemp;
    pTemp = pPremier;

    while (pTemp)
    {
        Fichier << pTemp;
        pTemp = pTemp->pSuivant;
    }
}

void ParcVoiture::Recuperer()
{
    ifstream Fichier("PARCVOI.TXT");
    if (!Fichier) return;

    Voiture *pTemp;

    while (!Fichier.eof())
    {
        pTemp = new Voiture;
        Ajouter(pTemp);
        Fichier >> pTemp;
        Fichier >> ws; // Enlever les espaces
    }
}

void ParcVoiture::Ajouter(Voiture *pVoi)
{
    if (pPremier == NULL)
    {
        pPremier = pVoi;
        pCourant = pVoi;
    }
    else
    {
        pCourant->pSuivant = pVoi;
        pCourant = pCourant->pSuivant;
    }
}

void ParcVoiture::AfficherTout()
{
    Voiture *pTemp;
    pTemp = pPremier;

    while (pTemp)
    {
        pTemp->Affiche();
        pTemp = pTemp->pSuivant;
    }
}

ParcVoiture::~ParcVoiture()
{
    Enregistrer();
    if (pPremier)
        delete pPremier;
}
int main()
{
    ParcVoiture Parc;
    Voiture *pVoi = NULL;
    int Option = 0;

    while (42)
    {
        cout << endl << "Choisissez une option de menu " << endl;
        cout << "(1-Creation, 2-Afficher parc, 0-pour quitter): ";
        cin >> Option;

        cin.ignore(); // Supprime le \n de l'instruction precedente

        switch (Option)
        {
            case 1  : pVoi = new Voiture;
                      pVoi->Saisir();
                      Parc.Ajouter(pVoi);
                      break;

            case 2  : Parc.AfficherTout();
                      break;

            case 0  : return 0;

            default : cout << endl << "Choix invalide\a" << endl;
                      continue;
        }
    } 
}