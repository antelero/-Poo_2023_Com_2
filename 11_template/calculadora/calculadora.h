#ifndef CALCULADORA_H
#define CALCULADORA_H

template <class T>
class Calculadora
{
private:
    T num1;
    T num2;
public:
    Calculadora(T n1, T n2);
    T suma();
    T resta();
    T multiplica();
    T divide();
};

#endif // CALCULADORA_H
