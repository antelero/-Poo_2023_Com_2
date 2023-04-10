/*
7. Realice una función que dado un vector dinámico de enteros, remueva una cantidad de
	elementos parados por parámetros. Dicha función debe comenzar a eliminar elementos
	desde el final.
*/
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int *del(int size, int *vec, int *bus, int element);
int fnd(int size, int *vec, int element, int &cont);
void order(int size, int *vec);

int main(){
    const int N = 10;
    int *arr = new int[N];

	arr[0] = 5;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 6;
	arr[5] = 5;
	arr[6] = 5;
	arr[7] = 2;
	arr[8] = 3;
	arr[9] = 4;
	
	
	int *bus = new int[2];
	
	bus[0] = 5;
	bus[1] = 2;
	/*bus[2] = 5;
	bus[3] = 2;*/
    for(int i = 0; i < N; i++){
        cout << arr[i] << " "<< endl;;
    }

    int *aux = del(N, arr,bus, 1);
	/*
	for(int i = 0; i < N; i++){
		cout << aux [i] << " ";
	}*/
    return 0;
}

int *del(int size, int *vec, int *bus, int element){
    int cont;
	int tamBus = sizeof(bus); ///sizeof(bus[0]);
	int *aux;
	for (int j=0; j<tamBus;j++)
	{		
		int pos = fnd(size, vec, bus[j], cont);
		cout << bus[j] << " " << pos << endl;
		for(int i = size-cont; i >= 0; i--){
			if(pos == -1)
				NULL;
			else{
				aux = new int[size-cont];
				for(int ii=size-cont;  i < pos; ii--){
					aux[ii] = vec[ii];
				}
				for(int i = pos+cont; i < size-1; i++){
					aux[i-cont] = vec[i];
				}
				delete [] vec;
			
				
			
			}
		}	
		
	}
	return aux;	
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

