/*
5. Realice una función que dado un vector dinámico de enteros, remueva la primera
coincidencia de un elemento pasado por parámetro.
*/

#include <iostream>
using namespace std;

int aparece(int *vec, int cant, int dato);
int * quita(int *vec, int cant, int pos);

int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 6;

    int dato = 3;

    int posic = aparece(arr, cant, dato);
    if (posic!=9999)
    {
        arr = quita(arr, cant, posic);
        /*cant--;
        arr = quita(arr, cant, 3);
       */
        for (int i=0;i<cant-1;i++)
        {
            cout << arr[i]<<endl;
        }
    }

    dato = 6;

    posic = aparece(arr, cant, dato);
    if (posic!=9999)
        {
            cant--;
            arr = quita(arr, cant, posic);

            for (int i=0;i<cant-1;i++)
            {
                cout << arr[i]<<endl;
            }
        }
    return 0;
}

int aparece(int *vec, int cant, int dato)
{
    int posicion = 9999;
    for (int i=0;i<cant;i++)
    {
        if(vec[i]==dato)
        {
            posicion=i;
            break;
        };
    }
    return posicion;
}

int * quita(int *vec, int cant, int pos){

    if (pos<cant)
    {
        int *aux = new int[cant - 1];

        for (int i=0;i<cant-1;i++)
        {
            if(i<pos)
                aux[i]=vec[i];
            else aux[i]=vec[i+1];
        }
        delete [] vec;
        return aux;
    }
    else return vec;
}


