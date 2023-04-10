/*
6. Realice una función que dado un vector dinámico de enteros, remueva un elemento pasado
por parámetro.
*/

#include <iostream>
using namespace std;

int aparece(int *vec, int cant, int dato);
int * quita(int *vec, int cant, int pos);
int apareceCantidad(int *vec, int cant, int dato);

int main(int argc, char *argv[]) {
    int cant = 5;
    int *arr= new int[cant];
    arr[0] = 5;
    arr[1] = 2;
    arr[2] = 3;
    arr[3] = 4;
    arr[4] = 3;

    int dato = 2;
    int veces = apareceCantidad(arr, cant, dato);
    if (veces>0)
    {
        int j=0;
        while(j<veces)
        {
            int posic = aparece(arr, cant, dato);
            if (posic!=9999)
            {
                arr = quita(arr, cant, posic);
                cant--;

                for (int i=0;i<cant;i++)
                {
                    cout << arr[i]<<endl;
                }
            }
            j++;
        }
    } else cout << "No se encontro dato para eliminar";

    return 0;
}


int apareceCantidad(int *vec, int cant, int dato)
{
    int cont = 0;
    for (int i=0;i<cant;i++)
    {
        if(vec[i]==dato)
        {
            cont++;
        };
    }
    return cont;
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


