
/*
9. Realice una función que dado 2 vectores de enteros, los concatene. Utilice recursividad. 
*/

#include <iostream>
using namespace std;
int agregar(int *arr, int size, int &inicio, int *aux, int &j);

int main(){
    const int N = 50;
    int arr[] = {3,2,5,4};
	int aux[N];
	//int arr[] = {1,2,3,2,1};
	
	//int arr[] = {1,2,1};
	//int arr[] = {1,2};
	

    int total,j = 0;
	int inicio = 0;
	int size = (sizeof(arr)/sizeof(arr[0]));
	total = size * 2;
	cout << "Size: "<<size << " " << total << endl;
	agregar(arr, size, inicio, aux, j);
	/*
	int j = 0;
	for(int i = 0; i < total; i++)
	{
		if (i<size){
			aux[i] = arr[i];
		}
		else
		{
			
			aux[i] = arr[j];
			j++;
		}
		cout << arr[i] << " "<<endl;
		
	}
	*/
	for(int i = 0; i < total; i++)
	{		
		cout << aux[i] << " ";		
	}
    return 0;
}

int agregar(int *arr, int size, int &inicio, int *aux, int &j){
	//cout << endl << inicio << " ";
	if (inicio>size*2){
		return 1;
	}
	if (inicio<size){
		aux[inicio] = arr[inicio];
		int j=0;
		inicio++;
		agregar(arr, size, inicio, aux,j);
		return 0;
	}
	else 	
		{
		aux[inicio] = arr[j];
		j++;
		inicio++;
		agregar(arr, size, inicio, aux,j);
		return 0;
	}
	/*
    if (size <= inicio)
		return 1;
	else	
		{
			inicio++;
			arr[size+inicio] = arr[inicio-1];
			agregar(arr, size, inicio, aux);
			
			return 0;
		}
	*/
	return 1;
}
