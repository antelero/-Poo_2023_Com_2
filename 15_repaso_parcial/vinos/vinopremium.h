#ifndef VINOPREMIUM_H
#define VINOPREMIUM_H

#include "vino.h"

class VinoPremium : public Vino
{
public:
    VinoPremium(int nro, int cantidad_litros, int anio_produccion);

    int getLtsVenta(int anio);
    double getMntVenta(int anio);
};

#endif // VINOPREMIUM_H
