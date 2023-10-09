#include "vinopremium.h"


VinoPremium::VinoPremium(int nro, int cantidad_litros, int anio_produccion):Vino(nro, 'P', cantidad_litros, anio_produccion)
{

}

int VinoPremium::getLtsVenta(int anio)
{
    return (anio - this->getAnioProduccion() >= 2) ? this->getCantidad_litros() : 0;
}

double VinoPremium::getMntVenta(int anio)
{
    return getLtsVenta(anio) * 200.0;

}
