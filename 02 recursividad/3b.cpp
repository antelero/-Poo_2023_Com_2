//3. Realice un método que retorne el mayor elemento de un vector de 10 enteros. Utilice 
//	recursividad.	
#include <iostream>
using namespace std;
int maximo(int *arr, int size, int &max);

int main(){
    const int N = 10;
    int arr[N];
    for(int i = 0; i < N; i++){
        arr[i] = rand()%100 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    int max = 0;
	maximo(arr, N, max);
	cout << "Mayor " << max;
    return 0;
}

int maximo(int *arr, int size, int &max){
    if(size > 0)
	{
        if (max < arr[size-1])
			max = arr[size-1];
	}	else return 0;
    return maximo(arr, size-1, max);
}
