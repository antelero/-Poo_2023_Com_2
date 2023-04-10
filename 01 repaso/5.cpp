#include <iostream>
using namespace std;
void formalinea(int cant, char car = '#');

	
int main(int argc, char *argv[]) {
	formalinea(7, '-');
	cout << endl;
	formalinea(10) ;
	return 0;
}


void formalinea(int cant, char car)
{
	for (int i=0; i<cant; i++)
		cout << car;
	
}

