#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
	int i;
	cout << endl << "Nombre d'arguments : " << argc << endl;
	for(i=0; i<argc; i++)
		cout << "Argument n " << i << " : " << argv[i] << endl;
	return 0;
}
