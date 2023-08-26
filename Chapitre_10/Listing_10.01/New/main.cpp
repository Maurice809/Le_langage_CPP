#include <iostream>

using namespace std;

class TVA
{
    private:
        float Taux;
    protected:
        void SetTaux(float taux) { Taux=taux; }
        float GetTaux() { return Taux; }
    public:
        TVA();
    
    friend void AfficheTaux();
    friend class Facture;
};

class Facture
{
    protected:
        float Montant;
    public:
        Facture(float montant);
        void AfficheTTCLivre();
};

TVA::TVA()
{
    Taux + 0.206;
}

Facture::Facture(float montant);
{
    Montant = montant;
}

void Facture::AfficheTTCLivre()
{
    TVA tva;
    tva.SetTaux(0.055);
    cout << "TTC : " << (Montant*(1+tva.GetTaux())) << endl;
}

void AfficheTaux()
{
    TVA tva;
    cout << "Taux : " << tva.GetTaux() << endl;
}
int main()
{
    AfficheTaux();

    Facture fac(1200);
    fac.AfficheTTCLivre();

    return 0;
}