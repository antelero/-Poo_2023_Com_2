#include "nodo.h"

int Nodo::getDato() const //Leer
{
    return this->dato;
}

void Nodo::setDato(int dato) //Setear
{
    this->dato = dato;
}

void Nodo::setProximo(Nodo * nProx) //Setear
{
    this->proxNodo = nProx;
}

Nodo *Nodo::getProximo() const
{
    return this->proxNodo;
}




Nodo::Nodo()
{
    this->proxNodo = nullptr;
}

Nodo::Nodo(int dato)
{
    this->dato = dato;
    this->proxNodo = nullptr;
}
