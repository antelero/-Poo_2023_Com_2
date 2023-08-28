#include <iostream>

#include <lista.h>

///Incluir el CPP
#include <listat.cpp>

using namespace std;

int main()
{

    cout << "Lista comun" << endl;
    Lista * l=new Lista();
    l->insertarDel(1);
    l->insertarDel(2);
    l->insertarDel(3);
    l->insertarDel(4);

    cout <<"Elementos: "<< l->getCantidad() << endl;
    cout <<"Buscar 2: "<< l->buscar(2) << endl;
    cout <<"Buscar 5: "<< l->buscar(5) << endl;

    cout << "Lista Template Double" << endl;
    ListaT<double>* lt = new ListaT<double>();
    lt->insertarDel(1);
    lt->insertarDel(2.5);
    lt->insertarDel(3.0);
    lt->insertarDel(4.0);

    cout <<"Elementos: "<< lt->getCantidad() << endl;
    cout <<"Buscar 2.5: "<< lt->buscar(2.5) << endl;
    cout <<"Buscar 5.0: "<< lt->buscar(5.0) << endl;
    cout <<"Buscar 4.0: "<< lt->buscar(4.0) << endl;

    cout << "Lista Template int" << endl;
    ListaT<int>* lint = new ListaT<int>();
    lint->insertarDel(1);
    lint->insertarDel(2);
    lint->insertarDel(3);
    lint->insertarDel(4);

    cout <<"Elementos: "<< lint->getCantidad() << endl;
    cout <<"Buscar 2: "<< lint->buscar(2) << endl;
    cout <<"Buscar 5: "<< lint->buscar(5) << endl;

    return 0;
}
