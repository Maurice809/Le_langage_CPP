#include <iostream>
#include <conio.h>

// fonction template Max
template <class T> T Max(T a, T b)
{
    return (a > b) ? a : b;
}

int main()
{
    int x = 1, y = 3;
    
    cout << endl;
    cout << "Plus grand de " << x << " ou " << y << " : " << Max(x,y) << endl;
    
    char c = 'a', d = 'z';
    cout << "Plus grand de " << c << " ou " << d << " : " << Max(c,d) << endl;
    cout << endl;
    getch();

    return 0;
}