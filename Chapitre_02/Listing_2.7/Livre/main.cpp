#include <iostream.h>
#include <conio.h>


int main(int argc, char *argv[])
{
	int i;
	cout << "Nombre d'arguments : " << argc << endl;
	for(i=0; i<argc; i++)
		cout << "Argument n " << i << " : " << argv[i] << endl;
	getch();

	return 0;
}
