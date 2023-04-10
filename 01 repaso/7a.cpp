#include <iostream>
using namespace std;
int calcula(int n)
{ 	
	int x;
	if (n==0)
		return 0;
	else
		cout << x << endl;;
		x = n-calcula(n-1);
		cout << x << endl;;
		return x;
} 

// fin de la funcion calcula
//-------------------------------
int main(int argc, char* argv[])
{ 
    cout<<calcula(5)<<endl;
    return 0;
    
}
