#include "vinomesa.h"

VinoMesa::VinoMesa(int nro, int cantidad_litros, int anio_produccion): Vino(nro, 'M', cantidad_litros, anio_produccion)
{

}

int VinoMesa::getLtsVenta(int anio)  {
        return (anio - this->getAnioProduccion() >= 1) ? this->getCantidad_litros() : 0;
}

double VinoMesa::getMntVenta(int anio)  {
        return getLtsVenta(anio) * 120.0;
}
