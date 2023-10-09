#include "vinoespecial.h"



VinoEspecial::VinoEspecial(int nro, int cantidad_litros, int anio_produccion): Vino(nro, 'E', cantidad_litros, anio_produccion)
{

}

int VinoEspecial::getLtsVenta(int anio)
{
    return (anio - this->getAnioProduccion() >= 2) ? this->getCantidad_litros() : 0;
}

double VinoEspecial::getMntVenta(int anio)
{
    return getLtsVenta(anio) * 320.0;
}
