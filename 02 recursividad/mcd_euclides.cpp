#include <iostream>
using namespace std;
int mcd (int a,int b);
int main(int argc, char *argv[]) {
	//Por ejemplo, para calcular el máximo común divisor de 105 y 70:
	//mcd(105,70)=mcd(105-70,70)=mcd(35,70)=mcd(35,70-35)=mcd(35,35)=mcd(35,35-35)=mcd(35,0)=35
	cout << mcd (105,70)<< endl;
	cout << mcd (70,105)<< endl;
	cout << mcd (84,70)<< endl;
	return 0;
}

int mcd (int a, int b){
	if(b == 0) 
		return a;
	else 
		return mcd (b,a%b) ;
}
