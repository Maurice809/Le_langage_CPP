#include <iostream>
#include <cstring>

using namespace std;

class Voiture
{
    protected:
        char Marque[20+1];
        char Modele[20+1];
        char Prix  [20+1];
    public:
        Voiture(const char *ma="", const char *mo="", const char *pr="");
        friend ostream& operator << (ostream& out, Voiture& v);
        friend istream& operator >> (istream& in, Voiture& v);
};

Voiture::Voiture(const char *ma, const char *mo, const char *pr)
{
    strcpy(Marque, ma);
    strcpy(Modele, mo);
    strcpy(Prix, pr);
}


ostream& operator << (ostream& out, Voiture& v)
{
    out.setf(ios::left, ios::adjustfield);
    out << " Marque : ";
    out << v.Marque; 
    out << " Modele : ";
    out << v.Modele;
    out << " Prix   : ";
    out << v.Prix;

    out << endl;

    return out;
}

istream& operator >> (istream& in, Voiture& v)
{
    cout << "Marques : ";
    in.getline(v.Marque, sizeof(v.Marque));
    cout << "Modele  : ";
    in.getline(v.Modele, sizeof(v.Modele));
    cout << "Prix    : ";
    in.getline(v.Prix, sizeof(v.Prix));

    return in;
}

int main()
{
    Voiture v("Lotus", "Seven","300000");
    cout << "Voiture : " << endl << v << endl;

    cout << "Saisiseez la marque le modele et le prix : " << endl;
    cin >> v;
    cout << endl << "Resultat : " << endl << v;

    return 0;
}
