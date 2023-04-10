/*
9. Realice una función que dado un vector dinámico de enteros, retorne una matriz que
contenga en una fila el número y el número de repeticiones de dicho número.
*/



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;


int *reptidos(int *vec, int size);
int *ordena(int *vec, int size, int cols);


int main(){
    int  N = 5;

    int * arr = new int [N];

    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 1;
    arr[3] = 3;
    arr[4] = 2;

    // Puntero a una matriz
    int **pm;

    int cols=N;
    int rows=2;
    int auxi = 0;

    //Ordena y muestra
    arr = ordena(arr,N, cols);
    for (int i = 0; i < cols; i++) {
        cout << arr[i] << endl;
    };

    int cantidad=0;
    int aux=arr[0];
    int indice = 0;

    //Conteo de distintos
    for (int i = 0; i < N; i++) {
        if(aux != arr[i]){
            cantidad++;
        }
    }
    cout << "cantidad "<<cantidad<<endl;

    pm = new int* [rows];
    int contador=0;
    for (int i = 0; i < N; i++) {
        if(aux < arr[i])
        {
            indice++;
            pm[indice] = new int[cantidad];
            contador=1;
            aux=arr[i];
        }
        else contador++;
    }
    cout << "Elementos de la Matriz con sus direcciones: " << endl;
/*
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cantidad; j++) {
            cout << pm[i][j] << "--> ";
            cout << &pm[i][j] << endl;

        }
        cout << endl;
    }
*/
    for (int j = 0; j < cantidad; j++) {
        cout << pm[j][0] << "--> ";
        cout << pm[j][1] << endl;

    }

    /*
    cout << "Elementos de la Matriz con sus direcciones: " << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            pm[i][j] = i + j;
            cout << pm[i][j] << "--> ";
            cout << &pm[i][j] << endl;
        }
        cout << endl;
    }
    */
    cout << endl;



    return 0;
}

int *ordena(int *vec, int size, int cols)
{
    int auxi = 0;
    //Ordeno vector
    for (int j = 0; j < cols-1; j++) {
        if (vec[j] > vec[j+1]){
            auxi = vec[j];
            vec[j] = vec[j+1];
            vec[j+1] = auxi ;
        }
    };
    return vec;
 }
