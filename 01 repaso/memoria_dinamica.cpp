// más punteros
#include <iostream>
int main () {
	
	int cantidad = 0;
	std::cout << "Cantidad=";
	std::cin >> cantidad;
	//int *arr = new int[cantidad];
	int *arr;
	arr = new int[cantidad];
	for (int i=0; i<cantidad;i++)
	{
		std::cin >> arr[i];
	}
	for (int i=0; i<cantidad;i++)
	{
		std::cout <<  arr[i];
	}
	return 0;
} 

