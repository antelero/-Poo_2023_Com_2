#ifndef LISTA_H
#define LISTA_H

#include <nodo.h>

class Lista
{
private:
    Nodo * primerNodo;
    int cantidad;
public:
    Lista();

    bool insertarDel(int dato);
    int getCantidad() const;
    Nodo * getUltimo() const;
    bool  buscar(int dato);
};

#endif // LISTA_H
