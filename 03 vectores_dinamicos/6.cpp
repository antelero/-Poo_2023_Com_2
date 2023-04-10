/*
6. Realice una función que dado un vector dinámico de enteros, remueva un elemento pasado
por parámetro
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *del(int size, int *vec, int element);
int fnd(int size, int *vec, int element, int &cont);
void order(int size, int *vec);

int main(){
    const int N = 10;
    int *arr = new int[N];
    srand(time(NULL));
    for(int i = 0; i < N; i++){
        arr[i] = rand()%4 + 1;
    }
    order(N, arr);

    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
	cout << endl;
    int *aux = del(N, arr, 1);
	
	for(int i = 0; i < N; i++){
		cout << aux [i] << " ";
	}
    return 0;
}

int *del(int size, int *vec, int element){
    int cont;
    int pos = fnd(size, vec, element, cont);
    
    if(pos == -1)
        return vec;
    else{
        int *aux = new int[size-cont];
        for(int i = 0; i < pos; i++){
            aux[i] = vec[i];
        }
        for(int i = pos+cont; i < size-1; i++){
            aux[i-cont] = vec[i];
        }
        delete [] vec;
/*
        for(int i = 0; i < size-cont; i++){
            cout << aux[i] << " ";
        }
*/
        return aux;
        }
}

int fnd(int size, int *vec, int element, int &cont){
    int place = -1;
    cont = 0;
    for(int i = size-1; i >= 0; i--){
        if(vec[i] == element){
            place = i;
            cont += 1;
			break;
        }
    }
    return place;
}

void order(int size, int *vec){
    for(int i = 0; i < size-1; i++){
        for(int j = i+1; j < size; j++){
            if(vec[i] > vec[j]){
                int iaux = vec[i];
                vec[i] = vec[j];
                vec[j] = iaux;
            }
        }
    }
}
