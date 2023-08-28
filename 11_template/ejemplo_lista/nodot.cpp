#include "nodot.h"

template <class T>
T NodoT<T>::getDato() const //Leer
{
    return this->dato;
}

template <class T>
void NodoT<T>::setDato(T dato) //Setear
{
    this->dato = dato;
}

template <class T>
void NodoT<T>::setProximo(NodoT * nProx) //Setear
{
    this->proxNodo = nProx;
}

template <class T>
NodoT<T> * NodoT<T>::getProximo() const
{
    return this->proxNodo;
}

template <class T>
NodoT<T>::NodoT()
{
    this->proxNodo = nullptr;
}

template <class T>
NodoT<T>::NodoT(T dato)
{
    this->dato = dato;
    this->proxNodo = nullptr;
}
