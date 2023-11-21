#include <iostream>
#include <stdlib.h>
#include <cstring>

using namespace std;

// fonction template Max
template <class T> T Max(T a, T b)
{
    return (a > b) ? a : b;
}

class Voiture
{
    protected:
        char Marque[20+1];
        char Modele[20+1];
        char Prix  [20+1];
    public:
        Voiture(char *ma="", char *mo="", char *pr="");

    friend ostream& operator << (ostream& out, Voiture v);

    friend bool operator > (Voiture a, Voiture b);
};

Voiture::Voiture(char *ma, char *mo, char *pr)
{
    strcpy(Marque, ma);
    strcpy(Modele, mo);
    strcpy(Prix, pr);
}

bool operator > (Voiture a, Voiture b)
{
    long pa = atol(a.Prix);
    long pb = atol(b.Prix);

    return (pa > pb) ? true : false;
}

ostream& operator << (ostream& out, Voiture v)
{
    cout << "(" << v.Marque << ", " << v.Modele << ", " << v.Prix << ")";
    return out;
}
int main()
{
    Voiture v1("Lotus","Seven","300000");
    Voiture v2("Aston Martin", "DB7", "600000");

    cout << "Voiture la plus chere : " << Max(v1,v2) << endl;
    return 0;
}