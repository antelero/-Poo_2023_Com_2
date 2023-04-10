/*
9. Realice una función que dado un vector dinámico de enteros, retorne una matriz que
contenga en una fila el número y el número de repeticiones de dicho número.*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *repeated(int size, int *vec);

int main(){
	int  N = 0;
	cout << "Ingrese N: ";
	cin >> N;
	int * arr = new int [N];
	
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 1;
	arr[3] = 3;
	arr[4] = 2;
	//arr[5] = 5;
	/*arr[6] = 1;
	arr[7] = 1;
	arr[8] = 9;
	arr[9] = 6;*/
	// Puntero a una matriz
	int **pm;
	
	int cols=N;
	int rows=2;
	int auxi = 0;
	//Ordeno vector
	for (int j = 0; j < cols-1; j++) {
		if (arr[j] > arr[j+1]){
			auxi = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = auxi ;
		}
	};
	for (int i = 0; i < cols; i++) {
		cout << arr[i] << endl;
	};
	
	int contador=0;
	int aux=arr[0];
	int indice = 0;
	pm = new int* [rows];
	for (int i = 0; i < N; i++) {
		if(aux == arr[i]){
			contador++;			
		} 
		else if(aux < arr[i])
		{
			indice++;	
			
			pm[indice] = new int[cols];
			contador=1;
			aux=arr[i];
		} 
			
		
	}
	
	for (int i = 0; i < rows; i++) {
		
	}
	
	cout << "Elementos de la Matriz con sus direcciones: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			pm[i][j] = i + j;
			cout << pm[i][j] << "--> ";
			
		}
		cout << endl;
	}
	
	/*	
	cout << "Elementos de la Matriz con sus direcciones: " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			pm[i][j] = i + j;
			cout << pm[i][j] << "--> ";
			cout << &pm[i][j] << endl;
		}
		cout << endl;
	}
	*/
	cout << endl;
	
	
	
	return 0;
}
	
		
