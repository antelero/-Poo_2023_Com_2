
/*
1. Realice una funci�n que dado un vector din�mico de enteros, agregue un nuevo valor pasado
por par�metro en la ultima posici�n
*/
#include <iostream>

using namespace std;

int * add(int * vec, int cant, int nuevo) {
	//Define un vector dinamico auxiliar de cant + 1
	int * aux = new int[cant + 1];
	for(int i = 0; i < cant; i++) {
		//Agrega los existentes
		aux[i] = vec[i];
	}
	//Agrega al final el valor nuevo
	aux[cant] = nuevo;
	delete [] vec;
	return aux;
}
int main()
{
	int * v = new int [5];
	v[0] = 5;
	v[1] = 2;
	v[2] = 3;
	v[3] = 4;
	v[4] = 6;
	
	int * aux = add(v, 5, 99);
	for (int i = 0; i < 6; i++) {
		cout << "aux[" << i <<"] =" << aux[i] << endl;
	}
	
	return 0;
	
}
