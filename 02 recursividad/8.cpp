
/*
6. Realice una función que dado un vector lo transforme de modo tal que el primer elemento sea el 
último y el ultimo el primero, el segundo el antepenúltimo, etc. Utilice recursividad. 
*/

#include <iostream>
using namespace std;
int agregar(int *arr, int size, int limite, int &total);

int main(){
    //const int N = 4;
    //int arr[] = {3,2,3,4,1};
	//int arr[] = {1,2,3,2,1};
	//int arr[] = {1,2,1};
	int arr[] = {1,2};
	cout << endl;

    int total = 0;
	int inicio = 0;
	int limite = (sizeof(arr)/sizeof(arr[0]));
	agregar(arr, limite, limite, inicio);
	
	for(int i = 0; i < limite*2; i++){
		
		cout << arr[i] << " ";
	}
	
    return 0;
}

int agregar(int *arr, int size, int limite, int &inicio){
    if (size < limite*2)
		{
			size++;
			arr[size] = arr[inicio];
			agregar(arr, size, limite, inicio);
			inicio++;
			return 0;
		}
	else return 1;
	return 1;
}
