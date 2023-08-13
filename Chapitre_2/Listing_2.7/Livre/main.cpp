#include <iostream.h>


int main(int argc, char *argv[])
{
	int i;
	cout << "Nombre d'arguments : " << argc << '\n';
	for(i=0; i<argc; i++)
		cout << "Argument n " << i << " : " << argv[i] << '\n';

	return 0;
}
