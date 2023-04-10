#include <iostream>
using namespace std;
const int N = 5;
int arr[N]={2,3,4,5,6};
int promedio = 0;
int cantidad = N;

void prom(int *arr, int N,int &promedio, int cantidad);
int promF(int *arr, int N, int &promedio, int cantidad);
	
int main(int argc, char *argv[]) 
{
	/*
	prom(arr,  N, promedio,cantidad);
	cout << promedio;
	*/
	int promedioF = 0;
	promedioF =	promF(arr,  N, promedioF,cantidad);
	cout << endl <<  'Promedio Funcion '<< promedioF;
	return 0;
}


void prom(int *arr, int N, int &promedio, int cantidad)
{
	if(N>0)
	{
		promedio += arr[N];
		prom(arr, N-1, promedio, cantidad);
	} else if (N=1) promedio = promedio /cantidad;
}

int promF(int *arr, int N, int &promedio, int cantidad)
{
	if(N>0)
	{
		promedio += arr[N];
		return promF(arr, N-1, promedio, cantidad);
	} else if (N=1) return promedio = promedio /cantidad;
	return 0;
}
