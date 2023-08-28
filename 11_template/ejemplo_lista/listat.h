#ifndef LISTAT_H
#define LISTAT_H


#include <nodot.cpp>
template <class T>
class ListaT
{
private:
    NodoT<T> * primerNodoT;
    int cantidad;
public:
    ListaT();

    bool insertarDel(T dato);
    int getCantidad() const;
    NodoT<T> * getUltimo() const;
    bool  buscar(T dato);
};



#endif // LISTAT_H
