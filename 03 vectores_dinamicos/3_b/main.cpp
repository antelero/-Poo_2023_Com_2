/*
3. Realice una función que dado un vector dinámico de enteros, agregue un nuevo valor pasado
por parámetro en una posición pasada por parámetros.
*/

#include <iostream>
using namespace std;

int * agrega(int *vec, int cant, int pos, int dato);

int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;
    arr = agrega(arr, cant, 2, 99);
    //cant++;
    //arr = agrega(arr, cant, 2, 99);
    for (int i=0;i<cant+1;i++)
    {
        cout << arr[i]<<endl;
    }


    return 0;
}

int * agrega(int *vec, int cant, int pos, int dato){

    if (pos<cant)
    {
        int *aux = new int[cant +1];

        for (int i=0;i<=cant;i++)
        {
            if(i<pos)
                aux[i]=vec[i];
            else if(i==pos)
                aux[i]=dato;
            else aux[i]=vec[i-1];
        }
        delete [] vec;
        return aux;
    }
    else return vec;
}


