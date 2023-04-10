#include <iostream>
using namespace std;
int pot(int a, int n);
int x;
int main(){
	int base, exponente, out;
	cout << "Ingrese la base "; 
	cin >> base;
	cout << endl << "Ingrese el exponente "; 
	cin >> exponente;
	out = pot(base, exponente);
	cout << out;
	return 0;
		
}
	
	int pot(int a, int n){
		if(n != 0)
		{
			cout << a  << ' ' << n << endl;
			x = a * pot(a, n-1);
			return (x);			
		}
		else
			return 1;
	}

