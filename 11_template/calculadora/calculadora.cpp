#include "calculadora.h"

template<class T>
Calculadora<T>::Calculadora(T n1, T n2)
{
    num1 = n1;
    num2 = n2;
}

template<class T>
T Calculadora<T>::suma() {
    return num1 + num2;
}

template<class T>
T Calculadora<T>::resta() {
    return num1 - num2;
}

template<class T>
T Calculadora<T>::multiplica() {
    return num1 * num2;
}

template<class T>
T Calculadora<T>::divide() {
    return num1 / num2;
}
