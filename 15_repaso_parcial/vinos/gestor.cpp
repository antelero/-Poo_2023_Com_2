#include "gestor.h"
#include <fstream>
#include <iostream>
#include <map>


struct regVino {
    int nro;
    char tipo;
    int cantidad_litros;
    int anio_produccion;
};


Gestor::Gestor()
{

}


void Gestor::generarBinVinos()
{
    // Abrir un archivo binario para escritura
    std::ofstream archivo("vinos.bin", std::ios::binary);
    if (!archivo) {
            std::cout << "No se pudo abrir el archivo para escritura." << std::endl;

    }
    // Datos ficticios de la empresa vitivinícola
    regVino datos[] = {
            {1, 'M', 500, 2020},
            {2, 'P', 300, 2021},
            {3, 'E', 200, 2022},
            {4, 'M', 700, 2020},
            {5, 'P', 400, 2021},
        };
     // Escribir los datos en el archivo binario
     for (const regVino& vino : datos) {
            archivo.write(reinterpret_cast<const char*>(&vino), sizeof(regVino));
        }
     // Cerrar el archivo
     archivo.close();
     std::cout << "Archivo 'vinos.bin' creado exitosamente con datos ficticios." << std::endl;
}

void Gestor::generarVinosDummy()
{

    // Datos ficticios de la empresa vitivinícola
    regVino datos[] = {
            {1, 'M', 500, 2020},
            {2, 'P', 300, 2021},
            {3, 'E', 200, 2022},
            {4, 'M', 700, 2020},
            {5, 'P', 400, 2021},
        };

    // Escribir los datos en el archivo binario
    for (const regVino& vino : datos) {
        if (vino.tipo == 'M') {
            vinos.push_back(new VinoMesa(vino.nro, vino.cantidad_litros, vino.anio_produccion));
        } else if (vino.tipo == 'P') {
            vinos.push_back(new VinoPremium(vino.nro, vino.cantidad_litros, vino.anio_produccion));
        } else if (vino.tipo == 'E') {
            vinos.push_back(new VinoEspecial(vino.nro, vino.cantidad_litros, vino.anio_produccion));
        }
    }
}


std::vector<Vino *> Gestor::cargarVinosDesdeArchivo(const std::string &archivo)
{
    std::ifstream input(archivo, std::ios::binary);
    if (!input.is_open()) {
        std::cout << "Error al abrir el archivo binario." << std::endl;
        return vinos;
    }

    while (input) {
        int nro, cantidad_litros, anio_produccion;
        char tipo;
        input.read(reinterpret_cast<char*>(&nro), sizeof(int));
        input.read(&tipo, sizeof(char));
        input.read(reinterpret_cast<char*>(&cantidad_litros), sizeof(int));
        input.read(reinterpret_cast<char*>(&anio_produccion), sizeof(int));

        if (input) {
            if (tipo == 'M') {
                vinos.push_back(new VinoMesa(nro, cantidad_litros, anio_produccion));
            } else if (tipo == 'P') {
                vinos.push_back(new VinoPremium(nro, cantidad_litros, anio_produccion));
            } else if (tipo == 'E') {
                vinos.push_back(new VinoEspecial(nro, cantidad_litros, anio_produccion));
            }
        }
    }

    input.close();
    return vinos;
}
void Gestor::escribirInformeAnual(std::vector<Vino*> vinos, int anio)
{
    std::ofstream output(std::to_string(anio) + "_informe.txt");
    if (!output.is_open()) {
        std::cout << "Error al abrir el archivo de salida." << std::endl;
        return;
    };
    output << "Anio\tLitros\tMonto" << std::endl;
    double montoTotal = 0.0;
    for (const auto& vino : vinos) {
        int litros = vino->getLtsVenta(anio);
        double monto = vino->getMntVenta(anio);
        montoTotal += monto;
        output << anio << "\t" << litros << "\t" << monto << std::endl;
    }
    output << "Total\t\t" << montoTotal << std::endl;
    output.close();
}

std::vector<Vino *> Gestor::getVinos()
{
    return this->vinos;
}

int Gestor::getSize()
{
    return this->vinos.size();
}


std::map<int, int> Gestor::getLitrosPorAnio(std::vector<Vino*> vinos){
    std::map<int, int> litrosPorAnio;
    for (const auto& vino : vinos) {
        int anioProduccion = vino->getAnioProduccion();
        litrosPorAnio[anioProduccion] += vino->getLtsVenta(2023);
    }

    return litrosPorAnio;
}
