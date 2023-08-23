#include <iostream.h>
#include <conio.h>

class A
{
    public:
    int i;
    void AfficheI();
};

// declaration heriratge
class B : public A
{
    public:
    int j;
    void AfficheJ();
};

void A::AfficheI()
{
    cout << " i : " << i << endl;
}

void B::AfficheJ()
{
    AfficheI();
    cout << " j : " << j << endl;
}

int main()
{
    B b;

    b.i = 100;
    b.j = 200;

    cout << endl;
    // appele de fonction de B
    b.AfficheJ();
    cout << endl;
    getch();

    return 0;
}