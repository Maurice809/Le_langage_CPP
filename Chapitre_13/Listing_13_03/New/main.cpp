#include <iostream>

using namespace std;

template <class T>
{
    private:
    T = Elements;
    int Nombre;
    T = Allouer (int nb); // Allouer un nombre d'elements

    public:
    int Ajouter(T& valeur); // Ajouter un element
    void Supprimer(int index); // Supprimer un element
    void SuppeimerTout(); // Supprimer tous les elements

    T& operator[](int index); // Renvois un element
};