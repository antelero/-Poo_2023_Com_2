#include <iostream>
using namespace std;

int trianguloDePascal(int fila, int columna) {
	if (fila <= 0 || columna <= 0 || columna > fila) {
		return 0;
	} else {
		if (fila == 1 && columna == 1) {
			return 1;
		} else {
			return trianguloDePascal(fila-1, columna) + trianguloDePascal(fila-1, columna-1);
		}
	}
}

int main(int argc, char *argv[]) {
	cout << endl << "----------------------------------------------" ;
	cout << endl << "Triangulo de Pascal :" << endl;
	
	for (int i = 1; i < 10; i ++) {
		for (int j = 1; j <= i; j++) {
			cout << trianguloDePascal(i, j) << " ";
		}
		cout << endl;
	};
	cout <<  "Triangulo de Pascal :" ;
	for (int i = 1; i < 10; i ++) {
		for (int j = 1; j <= i; j++) {
			if (i==4 && j==2)
				cout << trianguloDePascal(i, j) << " - " << i<< " " << j;
			else trianguloDePascal(i, j) ;
		}
		cout << endl;
	};
	cout << trianguloDePascal(2, 4) << " " << endl;
	return 0;
}
