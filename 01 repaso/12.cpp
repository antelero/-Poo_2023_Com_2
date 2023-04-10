#include <iostream>
#define N 99999
using namespace std;
#include <math.h>

//https://www.superprof.es/apuntes/escolar/matematicas/aritmetica/divisibilidad/numeros-primos.html

bool es_primo(int n){
    bool primo = true;
    for(int i = 2; i < n; i++) {
        if (n%i == 0)
            primo = false;
    }
    return primo;
}

void factorizar(int num, int primos[], int index){
    while(num > 1){
        for(int i = 0; i < index; i++){
            if(num % primos[i] == 0){
                cout << primos[i] << endl;
                num /= primos[i];
            }
        }
    }
}

int main(){
    int primi, num, primos[N];
    cout << "Ingrese un numero entero\n";
    cin >> num;
    cout << endl;
	int index = 0;
	//1-escribimos todos los números comprendidos entre   2   y   40.
	for(int i = 2; i <= num; i++){
		if (es_primo(i))
			primi = i;
		if (i == 2) 
			primos[index] = i;
		//cout << i<<  '-' << primi <<  '-' << pow(primi, 2) << endl;
		if (i%primi != 0 and i < num)
		{
			cout << primi  << ' ' << pow(primi, 2) << endl;
			if (i%primi != 0 and pow(primi, 2) < num)
			{
				cout << i << endl;
				/*index++;
				primos[index] = i;*/
			}
			
		}
	}
	
	
    if(es_primo(num)){
        int index = 0;
        for(int i = 2; i < num; i++){
            if(es_primo(i) and num%i == 0){
                primos[index] = i;
                index += 1;
            }
        }

        factorizar(num, primos, index);
    }
    return 0;
}
