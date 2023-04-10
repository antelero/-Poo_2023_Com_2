/*
3. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en una posición pasada por parámetros.

*/

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *add(int size, int *vec, int element, int pos);

int main(){
	int  N = 5;
	int *arr = new int[N];
	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 6;
	cout << endl << "==Original=="<< endl;
	for(int i=0;i<N;i++){
		cout<<arr[i]<<" ";
	}
	
	cout<< endl << "=================="<< endl;
    int *aux1 = add(N, arr, 88, 3);
    for(int i=0;i<=N;i++){
        cout<<aux1[i]<<" ";
    }
	cout<< endl << "=================="<< endl;

	
    return 0;
}

int *add(int size, int *vec, int element, int pos){
	//Genero un vector auxiliar con las cantidad de lugares para almacenar el valor agregado
    int *aux = new int[size];
    //if (pos>size) return NULL; -> chequear que la posicion sea  la indicada
    for(int i = 0; i < size+1; i++){
		//Si la iteracion es menor que la posicion copio el valor		
        if(i < pos)
            aux[i] = vec[i];
        /*else if(i == pos) //Si la iteracion es la posicion copio el valor
            aux[size] = vec[pos];*/
		else 
			//Si la iteracion es mayor que la posicion copio el valor anterior
			aux[i] = vec[i-1];
    }
	//en la posicion pos asigno el valor
    aux[pos] = element;
    delete [] vec;
    return aux;
}
