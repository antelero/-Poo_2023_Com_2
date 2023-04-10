/*

5. Realice una función que dado un vector dinámico de enteros, remueva la primera
coincidencia de un elemento pasado por parámetro
*/
#include <iostream>
#include <cstdlib>
using namespace std;
int *del(int size, int *vec, int pos);
int fnd(int size, int *vec, int element);

int main(){
    const int N = 10;
    int *arr = new int[N];
   
    for(int i = 0; i < N; i++){
        arr[i] = i;
    }
    for(int i = 0; i < N; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
	int pos = fnd(N, arr, 5);
	int *aux;
	//Buscar si lo encuentra
	if (pos!= 999){
		//Intenta borrarlo
		aux = del(N, arr, pos);
		for(int i = 0; i < N-1; i++){
			cout << aux[i] << " ";
		};
	}else 
		cout << "No se encontro!";
    
    return 0;
}

int *del(int size, int *vec, int pos){
    if(pos == -1)
        return vec;
    else{
        int *aux = new int[size-1];
        for(int i = 0; i < pos; i++){
            aux[i] = vec[i];
        }
        for(int i = pos+1; i < size; i++){
            aux[i-1] = vec[i];
        }
        delete [] vec;
        return aux;
    }
}

int fnd(int size, int *vec, int element){
    int place = -1;
    for(int i = 0; i < size; i++){
        if(vec[i] == element){
            place = i;
            i = size;
			break;
        }else place = 999;
    }
    return place;
}
