#ifndef VINOMESA_H
#define VINOMESA_H

#include "vino.h"

class VinoMesa : public Vino
{
public:
    VinoMesa(int nro, int cantidad_litros, int anio_produccion);

    int getLtsVenta(int anio);
    double getMntVenta(int anio);
};

#endif // VINOMESA_H
