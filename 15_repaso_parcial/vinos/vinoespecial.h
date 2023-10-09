#ifndef VINOESPECIAL_H
#define VINOESPECIAL_H

#include "vino.h"

class VinoEspecial : public Vino
{
public:
    VinoEspecial(int nro, int cantidad_litros, int anio_produccion);

    int getLtsVenta(int anio);
    double getMntVenta(int anio);
};

#endif // VINOESPECIAL_H
