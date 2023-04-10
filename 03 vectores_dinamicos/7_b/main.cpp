/*
7. Realice una función que dado un vector dinámico de enteros, remueva una cantidad de
elementos parados por parámetros. Dicha función debe comenzar a eliminar elementos
desde el final.

*/

#include <iostream>
using namespace std;


int * quita(int *vec, int cant, int pos);


int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;

    int elementos = 2;

    int j=0;
    while(j<elementos)
    {
        arr = quita(arr, cant, cant);
        cant--;
        for (int i=0;i<cant;i++)
        {
            cout << arr[i]<<endl;
        }
        cout << "Salio "<<endl;
        j++;
    }


    return 0;
}

int * quita(int *vec, int cant, int elem){

    if (elem<cant)
    {
        int *aux = new int[cant - 1];

        for (int i=0;i<cant-1;i++)
        {
            if(i<elem)
                aux[i]=vec[i];
            else aux[i]=vec[i+1];
        }
        delete [] vec;
        return aux;
    }
    else return vec;
}
