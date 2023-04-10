#include <iostream>
using namespace std;
const int N = 5;
int arr[N]={2,3,14,5,6};
int mayor = 0;
void may(int *arr, int N,int &mayor);
int mayorOtraVersion(int * vector, int cantidad);


int main(int argc, char *argv[]) {
	
	void may(int *arr, int N, int &mayor);
	may(arr,  N, mayor);
	cout << mayor<<endl;
	mayorOtraVersion(arr,  N);
	cout << mayorOtraVersion(arr,  N);
	return 0;
}

int mayorOtraVersion(int * vector, int cantidad) {
	if (cantidad == 1) {
		return vector[0];
	} else {
		int aux = mayorOtraVersion(vector, cantidad - 1);
		if (vector[cantidad -1] > aux) {
			return vector[cantidad -1];
		} else {
			return aux;
		}
	}
}

void may(int *arr, int N, int &mayor)
{
	if(N>0)
	{
		if(arr[N]>mayor)
			mayor = arr[N];
		may(arr, N-1, mayor);
	} 
}
