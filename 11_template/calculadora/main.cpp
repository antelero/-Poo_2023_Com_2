#include <iostream>
#include <calculadora.cpp>
using namespace std;

int main()
{
    Calculadora<int> intCalc(2, 1);
    Calculadora<float> floatCalc(2.4, 1.2);
    Calculadora<double> dblCalc(2.4, 1.2);

    cout << "Resultados Int +("<<intCalc.suma()<<") - ("<< intCalc.resta()<<") * ("<< intCalc.multiplica()<<") / ("<< intCalc.divide() <<")"<< endl;
    cout << "Resultados Float +("<<floatCalc.suma()<<") - ("<< floatCalc.resta()<<") * ("<< floatCalc.multiplica()<<") / ("<< floatCalc.divide() <<")"<< endl;
    cout << "Resultados Double +("<<dblCalc.suma()<<") - ("<< dblCalc.resta()<<") * ("<< dblCalc.multiplica()<<") / ("<< dblCalc.divide() <<")"<< endl;

    return 0;
}
