#include <iostream>
using namespace std;
int mayor(int vec[], int cant, int i, int mayorA){
	if (i == cant)
		return mayorA;
	else if (i<cant and mayorA<vec[i] )
	{
		mayorA = vec[i];
		return mayor(vec, cant, i+1, mayorA);
	};
	return mayor(vec, cant, i+1, mayorA);
}
int main(int argc, char *argv[]) {
	int n = 5;
	int arr[5];
	//int *arr = new int[N];
	arr[0] = 55;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	arr[4] = 6;
	
	
	cout << "Mayor recursivo: =" << mayor(arr,n,0,arr[0]) << endl;
	
	return 0;
}

