#include <iostream>
using namespace std;

bool es_bisiesto(int n){
    if(n%4 == 0 and ( n%100 != 0 or n%400 == 0))
        return true;
    else
        return false;
}

int main(){
    int num;
    cout << "Año ";
    cin >> num;
	if (es_bisiesto(num))
		cout << "Es bisiesto"<< endl;
	else cout << "NO Es bisiesto"<< endl;
    cout << (num);
    return 0;
}
