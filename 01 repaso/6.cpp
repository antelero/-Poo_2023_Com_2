#include <iostream>
using namespace std;
#include <math.h>


double intereses(int n, double i, double c);

double interes = 0;
double  i, c;
int n;

int main(int argc, char *argv[]) {
	
	cout<<endl<< "Ingrese Periodo n: ";
	cin >> n;
	cout<<endl<< "Ingrese Tasa i: ";
	cin >> i;
	cout<<endl<< "Ingrese Capital c: ";
	cin >> c;
	interes = intereses(n,i,c);
	cout<<endl<< "Intereses: " << interes;
	
//Parte b
	for (int p=2;p<=24;p++)
	{
		interes = intereses(p,i,c);
		cout<<endl<< "Intereses "<< p<< " meses: " << interes;
	};
	
	
	interes = intereses(12,i,c);
	cout<<endl<< "Intereses 12 meses: " << interes;
	
	interes = intereses(24,i,c);
	cout<<endl<< "Intereses 24 meses: " << interes;
	cin;
	return 0;
}
//Cn= C0 (1+i)**n
double intereses(int n, double i, double c)
{
	double inter=0;
	inter =  c*pow((1 + (i/100)), n);
	return inter;
}
