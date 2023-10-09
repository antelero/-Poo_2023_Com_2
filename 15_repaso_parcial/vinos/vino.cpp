#include "vino.h"

int Vino::getCantidad_litros() const
{
    return cantidad_litros;
}

Vino::Vino(int nro, char tipo, int cantidad_litros, int anio_produccion)
{
    this->nro = nro;
    this->tipo = tipo;
    this->cantidad_litros = cantidad_litros;
    this->anio_produccion = anio_produccion;
}

int Vino::getAnioProduccion()  {
    return anio_produccion;
}

char Vino::getTipo()  {
     return tipo;
}
