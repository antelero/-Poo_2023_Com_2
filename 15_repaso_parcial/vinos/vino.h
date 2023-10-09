#ifndef VINO_H
#define VINO_H

/*
Una empresa vitivinícola lo contrata para realizar un software que controle sus líneas de vinos, las cuales
son las siguientes :
    • de mesa : tiene un precio de 120 pesos por litro y está un año en barrica
    • premium: tiene un precio de 200 pesos por litro y está 2 años en barrica
    • especial: tiene un precio de 320 pesos por litro y está 2 años en barrica y 1 en botella.
La empresa guarda la información de su producción en un archivo binario, con el siguiente formato:
    nro : int
    Tipo : char //M(mesa), P (premium), E(especial)
    cantidad_litros: int
    anio_producción: int
*/

class Vino
{
private:
    int nro;
    char tipo; //M(mesa), P (premium), E(especial)
    int cantidad_litros;
    int anio_produccion;

public:    
    Vino(int nro, char tipo, int cantidad_litros, int anio_produccion);

    int getAnioProduccion();
    char getTipo();
    int getCantidad_litros() const;

    virtual int getLtsVenta(int anio) = 0;
    virtual double getMntVenta(int anio) = 0;

};

#endif // VINO_H
