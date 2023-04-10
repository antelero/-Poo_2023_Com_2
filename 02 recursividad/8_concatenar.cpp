
/*
8. Realice una función que, dado 2 vectores de enteros, los concatene. Utilice recursividad. 
*/

#include <iostream>
using namespace std;


int * concatenarAux(int * vector, int cantidad, int* vector2, int cantidad2, int* vector3, int indice);
int * concatenar(int * vector, int cantidad, int* vector2, int cantidad2);
int main(){
    //const int N = 4;
    //int arr[] = {3,2,3,4,1};
	//int arr[] = {1,2,3,2,1};
	//int arr[] = {1,2,1};
	int arr1[] = {3,4};
	int arr2[] = {1,2,1};
	
	cout << endl << "concatenar arreglos:";
	int * arrR = concatenar(arr1, 2, arr2, 3);
	for (int i = 0; i < 2+3; i++) {
		cout << arrR[i] <<  " , ";
	}
	cout << endl;
	
    return 0;
}

	int * concatenarAux(int * vector, int cantidad, int* vector2, int cantidad2, int* vector3, int indice) {
		if (indice == cantidad + cantidad2) {
			return vector3;
		} else {
			if (indice < cantidad) {
				vector3[indice] = vector[indice];
			} else {
				vector3[indice] = vector2[indice-cantidad];
			}
			return concatenarAux (vector, cantidad, vector2, cantidad2, vector3, indice+1);
		}
	}
	
	int * concatenar(int * vector, int cantidad, int* vector2, int cantidad2) {
		int * vector3 = new int[cantidad +cantidad2];
		return concatenarAux (vector, cantidad, vector2, cantidad2, vector3, 0);
	}
