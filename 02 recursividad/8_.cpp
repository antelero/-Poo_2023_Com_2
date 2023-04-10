
/*
8. Realice una función que dado un vector de enteros retorne verdadero si este es un palindromo, 
por ejemplo: [1,2,3,2,1]. Utilice recursividad.
*/

#include <iostream>
using namespace std;
int palindromo(int *arr, int size, int &total);

int main(){
    //const int N = 4;
    //int arr[] = {3,2,3,4,1};
	//int arr[] = {1,2,3,2,1};
	//int arr[] = {1,2,1};
	int arr[] = {1,1};
	cout << endl;

    int total = 0;
	int limite = (sizeof(arr)/sizeof(arr[0]));
	if (palindromo(arr, limite, total))
		cout << "Palindromo";
	else 
		cout << "NO ES Palindromo";
	
	
    return 0;
}

int palindromo(int *arr, int size, int &total){
    if(size/2<2)
	{
		if (arr[total] == arr[size-1])
		{
			total++;
			size--;
			palindromo(arr, size, total);
			return true;
		}return false;
		
	}  return false;
}
