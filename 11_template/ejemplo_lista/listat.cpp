#include "listat.h"

template <class T>
ListaT<T>::ListaT()
{
    this->primerNodoT = nullptr;
    cantidad = 0;
}

template <class T>
int ListaT<T>::getCantidad() const
{
    return cantidad;
}


template <class T>
bool ListaT<T>::insertarDel(T dato)
{
    NodoT<T> * pNodo = new NodoT<T>(dato);
    if (pNodo){
        pNodo->setProximo(this->primerNodoT);
        primerNodoT = pNodo;
        cantidad++;
        return true;
    }else{
        return false;
    }
}

template <class T>

NodoT<T> *ListaT<T>::getUltimo() const
{
    NodoT<T> * pNodo = this->primerNodo;
    NodoT<T> * pNodoAnt = pNodo;

    while (pNodo)
    {
        pNodoAnt = pNodo;
        pNodo = pNodo->getProximo();
    }
    return pNodoAnt;
}

template <class T>
bool ListaT<T>::buscar(T dato)
{
    NodoT<T> *pNodo= this->primerNodoT;
    while(pNodo) {
        if(pNodo->getDato() == dato)
            return true;
        else
            pNodo = pNodo->getProximo();
    }
    delete pNodo;
    return false;
}
