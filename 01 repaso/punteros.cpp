// más punteros
#include <iostream>
int main () {
	int valor1 = 5, valor2 = 15;
	int *p1, *p2;
	p1 = &valor1; // p1 = dirección de valor1
	p2 = &valor2; // p2 = dirección de valor2
	std::cout << "p1=" << p1<< " p2=" << p2 <<std::endl;
	*p1 = 10; // valor apuntado por p1 = 10
	*p2 = *p1; // valor apuntado por p2 = valor 	apuntado por p1
	std::cout << "*p1=" << *p1<< " *p2=" << *p2<<std::endl;
	p1 = p2; // p1 = p2 (asignación de punteros)
	std::cout << "p1=" << p1<< " p2=" << p2 <<std::endl;
	*p1 = 20; // valor apuntado por p1 = 20
	std::cout << "valor1==" << valor1 << "/ valor2=="
		<< valor2<<std::endl;
	return 0; } 

