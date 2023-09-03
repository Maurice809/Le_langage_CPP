#include <iostream>
#include <cstring>
#include <iomanip> // setx, setfill, setprecission
#include <conio.h>

int main()
{
    int Entier = 48;

    cout << endl;
    cout << "Conversions ------------------------------------------" << endl;
    cout << "Entier : " << Entier << endl;
    cout << "Hexa   : " << hex << Entier << endl;
    cout << "Oct    : " << oct << Entier << endl;
    cout << dec; // Necessite de repasser en base decimale (sinon octal)

    cout << endl;

    cout << "Largeur et padding -----------------------------------" << endl;
    float Decimal = 10.25;
    cout.setf(ios::right, ios::adjustfield);
    cout << "Decimal : " << setw(8) << Decimal << endl;
    cout << "Decimal : " << setw(8) << (Decimal+100) << endl;
    cout << "Decimal : " << setw(8) << setfill('0') << Decimal << endl;

    cout << endl;

    cout.width(54);
    cout.fill('-');
    cout.setf(ios::left, ios::adjustfield);
    cout << "Nombre de chiffre " << endl;
    float PI = 3.14159;
    cout << "PI      : " << PI << endl;
    cout << "PI      : " << setprecision(3) << PI << endl;
    cout << "PI      : " << setprecision(4) << PI << endl;
    cout << "PI      : " << setprecision(5) << PI << endl;
    
    cout << endl;

    cout.width(54);
    cout.fill('-');
    cout.setf(ios::left, ios::adjustfield);
    cout << "Chaines, alignement et padding ";

    char Chaine[40+1];
    strcpy(Chaine, "Monsieur Tanguy");
    cout << endl << "Chaine  : " << Chaine << endl;
    cout << "Chaine  : " << Chaine << endl;
    cout.width(54);
    cout.fill('-');
    cout.setf(ios::left, ios::adjustfield);
    cout << Chaine << endl; 
    cout << endl;
    getch();

    return 0;
}
