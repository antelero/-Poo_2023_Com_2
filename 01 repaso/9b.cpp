#include <iostream>
using namespace std;
int fibo(int n);

int main(){
    int iteraciones, out;
    cout << "Ingrese la cantidad de iteraciones a realizar\n";
    cin >> iteraciones;
    out = fibo(iteraciones);
	cout << out;

    cout << out;
    return 0;
}
	int fibo(int n) {
		if (n == 0 || n == 1) {
			return 1;
		} else {
			int cont = 2;
			int ant = 1;
			int antant = 1;
			int resultado = 0;
			while(n >= cont) {
				resultado = ant + antant;
				antant = ant;
				ant = resultado;
				cont++;
			}
			return resultado;
		}
	}
	

/*

#include <iostream>
using namespace std;
int fibo(int n);

int main(){
	int iteraciones, out;
	cout << "Ingrese la cantidad de iteraciones a realizar\n";
	cin >> iteraciones;
	out = fibo(iteraciones);
	cout << out;
	return 0;
}
	
	int fibo(int n){
		int f0 = 1, f1 = 1, aux;
		while(n != 0){
			cout << f1 << endl;;
			aux = f1;
			f1 = f0 + f1;
			
			f0 = aux;
			n -= 1;
		}
		return f1;
	}		

*/
