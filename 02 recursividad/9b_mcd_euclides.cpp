#include <iostream>
using namespace std;

int mcd(int a , int b){
    if(a>b)
        return mcd(a-b,b);
    else if(a<b)
        return mcd(a,b-a);
    else
        return a;
}
	
int mcdSimple(int a, int b){
	if(b == 0)
		return a;
	else
		return mcd(b, (a%b));
}

int main(){
    int num1, num2;
    cout << "Ingrese un dos numeros enteros\n";
    cin >> num1 >> num2;
    cout << mcd(num1, num2)<<endl;
	cout << mcdSimple(num1, num2)<<endl;
    return 0;
}
