#include <iostream>
#include <cmath>
using namespace std;

bool es_primo(int n){
    bool primo = true;
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
    //num = sqrt(num);
	if (es_primo(num))
		cout << "Es Primo";
	else cout << "NO Es Primo";
    return 0;
}
