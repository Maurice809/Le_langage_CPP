#include <iostream>

using namespace std;

class Materiel
{
    private:
        static int NombreMat;
    public:
        Materiel();
        ~Materiel();

        static int GetNombreMat()
        {
            return NombreMat;
        }
};

int Materiel::NombreMat = 0;

class Micro : public Materiel
{
    public:
        Micro();
};

Materiel::Materiel()
{
    cout << "Condtruteur Materiel" << endl;
    NombreMat++;
    cout << NombreMat << endl;
}

Materiel::~Materiel()
{
    cout << "Destructeur Materiel" << endl;
    NombreMat--;
}

Micro::Micro()
      :Materiel()
{
}

int main()
{
    cout << "Nombre de Materiels : " << Materiel::GetNombreMat << endl;

    Materiel *pMat;
    pMat = new Materiel;

    cout << "Nombre de Materiels : " << Materiel::GetNombreMat << endl;

    Micro *pMic;
    pMic = new Micro;

    cout << "Nombre de Materiels : " << Materiel::GetNombreMat << endl;

    delete pMic;

    cout << "Nombre de Materiels : " << Materiel::GetNombreMat << endl;
    
    Micro *pMic2;
    pMic2 = new Micro;

    delete pMic2;
    delete pMat;

    cout << "Nombre de Materiels : " << Materiel::GetNombreMat << endl;
    
    return 0;
}