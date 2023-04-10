#include <iostream>
using namespace std;

int n = 0;
std::string nombre;
std::string nombre_mayor;
int edad_mayor = 0;
int edad = 0;
bool validar_edad(int edad);
int main(int argc, char *argv[]) {
	
	edad_mayor = edad;
	nombre_mayor = nombre;
	do {
		cout << n  << endl;
		cout << "Nombre" << endl;;
		cin >> nombre;
		cout << "Edad" << endl;;
		cin >> edad;
		
		while (!validar_edad(edad))
		{
			cout << "Reingrese Edad" << endl;
			cin >> edad;
		}
		if (edad > edad_mayor)			{
			edad_mayor = edad;
			nombre_mayor = nombre;
		};
		n++;
	}while(n<=10);
	
	
	cout << "Edad Mayor " << edad_mayor << endl;;
	cout << "Nombre Mayor " << nombre_mayor << endl;;
	
	return 0;
}


bool validar_edad(int edad)
{
	if(edad > 12 && edad < 90){
		cout << "Edad Valida" << endl;
		return true;
	}
	else {		
		cout << "Edad Invalida" << endl;
		return false;
	}
	
}
