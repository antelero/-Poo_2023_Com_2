#include <iostream>
using namespace std;

#define N 5

int a = 5;
int b = 6;
char ca = 'a';
char cb = 'b';

float aa[N] = {1,2,3,4,5};
float ba[N] = {5,4,3,2,1};

void intercambio(char &a, char &b);
void intercambio(int &a, int &b);
void intercambio(float a[], float b[]);

int main(int argc, char *argv[]) {
	
	//Parte A: char
	cout << "PARTE A" << endl;
	cout << "A"  << ca << "B" << cb << endl;
	intercambio(ca,cb);
	cout << "A"  << ca << "B" << cb << endl;
	
	//Parte B: int
	cout << "PARTE B" << endl;
	cout << "A"  << a << "B" << b << endl;
	intercambio(a,b);
	cout << "A"  << a << "B" << b << endl;
	
	
	//Parte c: float array
	cout << "PARTE C" << endl;
	for (int i=0; i<N;i++)
		cout << "A " << aa[i]<< endl;
	for (int i=0; i<N;i++)
		cout << "B " << ba[i] << endl;
	 
	intercambio(aa,ba);
	for (int i=0; i<N;i++)
		cout << "A "<< aa[i]<< endl;
	for (int i=0; i<N;i++)
		cout << "B " << ba[i] << endl;	
	return 0;
}

//Parte A: char
void intercambio(char &a, char &b)
{
	char aux = 0;
	aux = a;
	a = b;
	b = aux;	
}

//Parte B: int
void intercambio(int &a, int &b)
{
	int aux = 0;
	aux = a;
	a = b;
	b = aux;	
}

//Parte c: float array
void intercambio(float a[], float b[])
{
	for (int i=0;i<N;i++)
	{
		float aux = 0;
		aux = a[i];
		a[i] = b[i];
		b[i] = aux;
	}
}	
