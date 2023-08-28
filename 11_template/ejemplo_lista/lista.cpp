#include "lista.h"

int Lista::getCantidad() const
{
    return cantidad;
}

Lista::Lista()
{
    primerNodo = nullptr;
    cantidad = 0;
}

bool Lista::insertarDel(int dato)
{
    Nodo * pNodo = new Nodo(dato);
    if (pNodo){
        pNodo->setProximo(this->primerNodo);
        primerNodo = pNodo;
        cantidad++;
        return true;
    }else{
        return false;
    }
}

Nodo *Lista::getUltimo() const
{
    Nodo * pNodo = this->primerNodo;
    Nodo * pNodoAnt = pNodo;

    while (pNodo)
    {
        pNodoAnt = pNodo;
        pNodo = pNodo->getProximo();
    }
    return pNodoAnt;
}

bool Lista::buscar(int dato)
{
    Nodo *pNodo= this->primerNodo;
    while(pNodo) {
        if(pNodo->getDato() == dato)
            return true;
        else
            pNodo = pNodo->getProximo();
    }
    delete pNodo;
    return false;
}
