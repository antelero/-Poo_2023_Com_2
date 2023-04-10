#include <iostream>
using namespace std;
int menor(int vec[], int cant, int i, int menorA){
	if (i == cant)
		return menorA;
	else if (i<cant and menorA>vec[i] )
	{
		menorA = vec[i];
		return menor(vec, cant, i+1, menorA);
	};
	return menor(vec, cant, i+1, menorA);
}
	int main(int argc, char *argv[]) {
		int n = 5;
		int arr[5];
		//int *arr = new int[N];
		arr[0] = 0;
		arr[1] = 2;
		arr[2] = 3;
		arr[3] = 4;
		arr[4] = 6;
		
		
		cout << "Menor recursivo: =" << menor(arr,n,0,arr[0]) << endl;
		
		return 0;
	}
	
	
