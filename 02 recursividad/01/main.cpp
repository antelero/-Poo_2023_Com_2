/*
 * 1. Realice un método que retorne el acumulado de un vector de 10 enteros.
Utilice recursividad.
*/
#include <iostream>

using namespace std;

void cargaArreglo(int a[],int tam);
double calcularPromedio(int a[],int tam);

int main()
{
    //int a = new int[4];
    int a[4];// = {1,2,3,4};
    cargaArreglo(a,4);
    double promedio =  calcularPromedio(a,4);
    cout << "Hello World!" <<promedio<< endl;
    return 0;
}

void cargaArreglo(int a[],int tam)
{
    int i = 0;
    while (i<tam){
        a[i]=i;
        i++;
    }
}

double calcularPromedio(int a[],int tam)
{
    float prom = 0.0;
    for (int i=0; i<tam; i++){
        prom += a[i];
    }
    prom = prom / tam;
}
