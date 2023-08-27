#include <iostream.h>
#include <conio.h>

class Materiel
{
    public:
        Materiel();
        ~Materiel();

        static int NombreMat;
};

int Materiel::NombreMat = 0;

class Micro : public Materiel
{
    public:
        Micro();
};

Materiel::Materiel()
{
    NombreMat++;
}

Materiel::~Materiel()
{
    NombreMat--;
}

Micro::Micro()
      :Materiel()
{
}

int main()
{
    cout << "Nombre de Materiels : " << Materiel::NombreMat << endl;

    Materiel *pMat;
    pMat = new Materiel;

    cout << "Nombre de Materiels : " << Materiel::NombreMat << endl;

    Micro *pMic;
    pMic = new Micro;

    cout << "Nombre de Materiels : " << Materiel::NombreMat << endl;

    delete pMic;

    cout << "Nombre de Materiels : " << Materiel::NombreMat << endl;
    
    Micro *pMic2;
    pMic2 = new Micro;

    delete pMic2;
    delete pMat;

    cout << "Nombre de Materiels : " << Materiel::NombreMat << endl;
    getch();
        
    return 0;
}