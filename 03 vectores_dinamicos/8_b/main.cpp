/*
8. Realice una función que dado un vector dinámico de enteros, retorne un vector con el doble
de elementos y los nuevos elementos deben ser una copia de los anteriores.
*/


#include <iostream>
using namespace std;

int * duplica(int *vec, int cant);

int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;
    arr = duplica(arr, cant);
    cant = cant * 2;
    //arr = agrega(arr, cant, 2, 99);
    for (int i=0;i<cant;i++)
    {
        cout << arr[i]<<endl;
    }


    return 0;
}

int * duplica(int *vec, int cant){

    int *aux = new int[cant * 2];

    for (int i=0;i<cant;i++)
    {
        aux[i]=vec[i];
        aux[i+cant]=vec[i];
    }
    delete [] vec;
    return aux;
}


