#include <iostream>

using namespace std;

int main()
{
    int NbrElement = 5;

    //Creer
    int *pNbr = new int[NbrElement];

    //Modifier
    for (int i = 0; i<NbrElement; i++)
    {
        cout << "Valeur de l'entier " << i << " : ";
        cin >> pNbr[i];
    }
    cout << endl;

    //Afficher
    for (int i = 0; i<NbrElement; i++)
    {
        cout << "Entier " << i << " = " << pNbr[i] << endl;
    }

    //Detruire
    delete[] pNbr;

    return 0;
}