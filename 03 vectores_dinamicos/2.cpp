/*
2. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en la primera posición.
*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *addIn(int size, int *vec, int element);

int main(){
    const int  N = 5;
	int *arr = new int[N];
	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 6;
	
	//Agrego  al inicio  
    int *aux = addIn(N, arr, 99);
	
    for(int i=0;i<N+1;i++){
        cout<<aux[i]<<" ";
    }
    return 0;
}

int *addIn(int size, int *vec, int element){
	////Agrego el registro nuevo al inicio del vector auxiliar
    int *aux = new int[size+1];
	//Asigno elprimer elemento
	aux[0] = element;
    for(int i = 0; i <= size; i++){
		//Agrego los siguientes como estaban en el vector original
        aux[i+1] = vec[i];        
    }
	//Borro el vctor auxiliar
    delete [] vec;
    return aux;
}
