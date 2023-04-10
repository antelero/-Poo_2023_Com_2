#include <iostream>
#include <cmath>
using namespace std;
int H(int x);

int main(){
	
    int num;
    cout << "Ingrese un numero entero\n";
    cin >> num;
    cout << H(num);
    return 0;
}

int H(int x){
	int k = 0;
    if(x < 4)
	{
		k = (4*x);
		cout << x <<" "<< k << endl;
		return k;
	}
    else
		{
		k = (3*H(x-2)+1);
		cout << x <<" "<< k << endl;
        return k;
	}
}


