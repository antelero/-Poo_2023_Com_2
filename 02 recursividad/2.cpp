//2. Realice un m�todo que retorne el acumulado de un vector de 10 enteros. Utilice recursividad.	
#include <iostream>
using namespace std;
int sum(int *arr, int size, int &total);

int main(){
    const int N = 10;
    int arr[N];
    for(int i = 0; i < N; i++){
        arr[i] = rand()%10 + 1;
        cout << arr[i] << " ";
    }
    cout << endl;

    int total = 0;
    sum(arr, N, total);
	cout << "Total " << total;
    return 0;
}

int sum(int *arr, int size, int &total){
    if(size > 0)
	{
        total += arr[size-1];
		return sum(arr, size-1, total);
	}
	else 
		return 0;
    
}
