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
	arr[2] = 4;
	arr[3] = 1;
	arr[4] = 2;
	arr[5] = 5;
	/*arr[6] = 1;
	arr[7] = 1;
	arr[8] = 9;
	arr[9] = 6;*/
	
	int cols=N;
	int rows=2;
	int auxi = 0;
	cout << " vector" << endl;
	for (int i = 0; i < cols; i++) {
		cout << arr[i] << endl;
	};
	//Ordeno vector
	for (int i=0; i<N-1; i++)
	{
		for (int j=i+1; j<N; j++)
		{
			if(arr[i]>arr[j])
			{
				auxi = arr[i];
				arr[i] = arr[j];
				arr[j] = auxi;
			}
		}
	}
	

	cout << "Ordeno vector" << endl;
	for (int i = 0; i < cols; i++) {
		cout << arr[i] << endl;
	};
	
	int contador=0;
	int aux=arr[0];
	int indice = 0;
	int cantidad = 0;			
	//Conteo de distintos
	
	for (int i = 0; i < N; i++) {
		if(aux != arr[i]){
			contador++;
		} 		
	}
	
	cout << "cantidad "<<contador<<endl;
	//Creo la Matriz
	
	int **M = new int* [rows];
	for (int i = 0; i < rows; i++)
		M[i] = new int[contador];
	
	aux == arr[0];
	M[0][indice]=aux;
	//LLeno la matriz		
	for (int i = 0; i <= N; i++) {
		if(aux == arr[i]){
			cantidad++;	
			M[1][indice]=cantidad;
			M[0][indice]=aux;
		} 
		else if(aux < arr[i])
		{
			M[0][indice]=aux;
			indice++;				
			cantidad=1;
			aux=arr[i];
		} 		
	}
	/*
	cout << "Introduzca la matriz" << endl;
	for (int i = 0; i < rows; i++)
		for (int j = 0; j < contador; j++)
			cin >> M[i][j];
			
	*/		
	cout << "Salida " << endl;
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < contador; j++)
			cout << M[i][j] << " ";
		cout << endl;
	}
	
	return 0;
}
