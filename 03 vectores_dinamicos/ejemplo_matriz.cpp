#include <iostream>
using namespace std;

int main() {
	int i,j,f,c;
	
	cout << "Introduce el numero de filas" << endl;
	cin >> f;
	cout << "Introduce el numero de columnas" << endl;
	cin >> c;
	
	// creamos la matriz !
	int **M = new int* [f];
	for (i = 0; i < f; i++)
		M[i] = new int[c];
	
	// Comprobamos
	if (!M) {
		cout << "No se puede reservar el espacio" << endl;
		return 1;
	}
	
	cout << "Introduzca la matriz" << endl;
	for (i = 0; i < f; i++)
		for (j = 0; j < c; j++)
			cin >> M[i][j];
			
			cout << "Mostrar la matriz" << endl;
			for (i = 0; i < f; i++) {
				for (j = 0; j < c; j++)
					cout << M[i][j] << " ";
					cout << endl;
			}
			delete [] M;
			
			return 0;
}
