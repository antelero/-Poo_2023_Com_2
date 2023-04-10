/*
8. Realice una función que dado un vector dinámico de enteros, retorne un vector con el doble
	de elementos y los nuevos elementos deben ser una copia de los anteriores.
	*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *doble(int size, int *vec);

int main(){
    const int N = 3;
    int *arr = new int[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        arr[i] = rand()%100 + 1;
    }

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    int *aux = doble(N, arr);

    for(int i = 0; i < N*2; i++){
        cout << aux[i] << " ";
    }

    return 0;
}

int *doble(int size, int *vec){
        int *aux = new int[size*2];
        for(int i = 0; i < size; i++){
            aux[i] = vec[i];
            aux[size+i] = vec[i];
        }
        delete [] vec;
        return aux;
}
