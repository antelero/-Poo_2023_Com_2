
/*
6. Realice una función que dado un vector lo transforme de modo tal que el primer elemento sea el 
último y el ultimo el primero, el segundo el antepenúltimo, etc. Utilice recursividad. 
*/

#include <iostream>
using namespace std;

void reverse(int arr[], int low, int high);

int main(){
    const int N = 5;
    int arr[] = {3,2,3,4,1};
	//int arr[] = {5,2,3,5,1};
	//int arr[] = {1,2,1};
	//int arr[] = {1,2};
	cout << "Original "<< endl;
	
	for(int i = 0; i < N; i++){
		cout << arr[i] << " ";
	}
	reverse( arr, 0, N-1);
	cout<< endl << "Inverso "<< endl;
	for(int i = 0; i < N; i++){
		cout << arr[i] << " ";
	}
	

	
    return 0;
}
	void reverse(int arr[], int low, int high)
	{
		
		if (low < high)
		{
			//swap(arr[low], arr[high]);
			int aux  = arr[low];
			arr[low] = arr[high];
			arr[high]=aux;
			reverse(arr, low + 1, high - 1);
		}
	}
