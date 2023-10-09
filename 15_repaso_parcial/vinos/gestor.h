#ifndef GESTOR_H
#define GESTOR_H
#include <vector>
#include <string>
#include <map>

#include "vino.h"
#include "vinomesa.h"
#include "vinoespecial.h"
#include "vinopremium.h"


class Gestor
{
private:
    std::vector<Vino*> vinos;
public:
    Gestor();
    int calcularProd(int anio);
    void generarBinVinos();
    std::vector<Vino*> cargarVinosDesdeArchivo(const std::string& archivo);
    std::vector<Vino*> getVinos();
    int getSize();
    //void escribirInformeAnual(std::vector<Vino*> vinos, int anio);
    void escribirInformeAnual(std::vector<Vino*> vinos, int anio);

    void generarVinosDummy();
    std::map<int, int> getLitrosPorAnio(std::vector<Vino *> vinos);
};

#endif // GESTOR_H
