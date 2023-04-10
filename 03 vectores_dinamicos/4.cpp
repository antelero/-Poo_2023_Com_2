/*
4. Realice una funci�n que dado un vector din�mico de enteros, remueva el elemento que se
	encuentra en una posici�n pasada por par�metro. Si la posici�n es mayor a la cantidad de
	elementos, la funci�n no debe remover ning�n elemento
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *del(int size, int *vec, int pos);

int main(){
	const int  N = 5;
	int pos = 3;
	int *arr = new int[N];
	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 6;
	
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    };
    cout << endl;
	
	if(pos > N)
		cout << "No se puede remover el elemento";
	else 
		{
			//Si se puede borrar lo borra
			int *aux = del(N, arr, pos);
			for(int i = 0; i < N-1; i++){
				cout << aux[i] << " ";
			}
	}
    
    return 0;
}

int *del(int size, int *vec, int pos){
    if(pos > size)
		//No se puede
        return vec;
    else{
		//Defino el auxiliar con la nueva dimension
        int *aux = new int[size-1];
		//Mientras el indice sea menor a la iteracion
        for(int i = 0; i < pos; i++){
			//copio el valor
            aux[i] = vec[i];
        }
		//Mientras el indice sea menor al tama�o
        for(int i = pos+1; i < size; i++){
			//copio el valor en la posicion anterior
            aux[i-1] = vec[i];
        }
        delete [] vec;
        return aux;
    }
}
