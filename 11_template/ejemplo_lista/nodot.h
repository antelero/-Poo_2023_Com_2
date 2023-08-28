#ifndef NODOT_H
#define NODOT_H

template <class T>
class NodoT
{
private:
    T dato;
    NodoT * proxNodo;
public:
    NodoT();
    NodoT(T dato);

    T getDato() const;
    void setDato(T newDato);
    void setProximo(NodoT *nProx);
    NodoT * getProximo() const;

};

#endif // NODOT_H
