#include <iostream>
#include <cmath>

using namespace std;

bool es_primo(int n){
    
    for(int i = 2; i < n; i++) {
        if (n%i == 0)
            return false;
    }
    return true;
}

int main(){
    int num;
    cout << "Ingrese un numero entero\n";
    cin >> num;
	
	
	cout << endl;
	cout << " el numero " << num;
	if (es_primo(num))
		cout <<" Es Primo"<<endl;
	else cout <<  " NO Es Primo"<<endl;
	//1-escribimos todos los números comprendidos entre   2   y   40.
	for(int i = 2; i < num; i++){
		//num = sqrt(num);
		if (es_primo(i))
			cout << i<<" Es Primo"<<endl;
		else cout << i<< " NO Es Primo"<<endl;
	};
    return 0;
}
