#ifndef NODO_H
#define NODO_H


class Nodo
{
private:
    int dato;
    Nodo * proxNodo;
public:
    Nodo();
    Nodo(int dato);

    int getDato() const;
    void setDato(int newDato);
    void setProximo(Nodo *nProx);
    Nodo * getProximo() const;

};

#endif // NODO_H
