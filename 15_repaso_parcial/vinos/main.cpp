#include <iostream>
#include <gestor.h>
#include <map>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Gestor *ges = new Gestor();
    //ges->generarBinVinos();
    //ges->cargarVinosDesdeArchivo("vinos.bin");

    cout << "Tamano " <<ges->getSize()<< std::endl;
    for(auto& it : ges->getVinos())
        cout << (it);

    ges->generarVinosDummy();
    // 1. Calcular la cantidad de litros y monto para un anio determinado (por ejemplo, 2022)
    int anioDeseado = 2022;
    int litrosVendibles = 0;
    double montoTotal = 0.0;
    for (const auto& vino : ges->getVinos()) {
           litrosVendibles += vino->getLtsVenta(anioDeseado);
           montoTotal += vino->getMntVenta(anioDeseado);
       }
    cout << "Para el anio " << anioDeseado << ":" << endl;
    cout << "Cantidad de litros vendibles: " << litrosVendibles << " litros" << endl;
    cout << "Monto total obtenido: $" << montoTotal << endl;

    // 2. Escribir el informe anual para los años 2020 a 2023

     for (int anio = 2020; anio <= 2023; ++anio) {
        //ges->escribirInformeAnual(aux,anio);
        ges->escribirInformeAnual(ges->getVinos(), anio);
    }

     // 3. Funciones para obtener estadísticas
     // 3.1. Los 5 años que se produjeron más litros

    cout << "Los 5 anios que se produjeron mas litros:" << endl;
    int count = 0;
    map<int, int> litrosPorAnio;
    litrosPorAnio = ges->getLitrosPorAnio(ges->getVinos());
    for (const auto& pair : litrosPorAnio) {
         cout << "Anio: " << pair.first << ", Litros: " << pair.second << endl;
         count++;
         if (count >= 5) {
             break;
         }
     }
    /*
     * map<int, int> litrosPorAnio;
    for (const auto& vino : ges->getVinos()) {
        int anioProduccion = vino->getAnioProduccion();
        litrosPorAnio[anioProduccion] += vino->getLtsVenta(2023);
    }
    cout << "Los 5 anios que se produjeron mas litros:" << endl;
    int count = 0;
    for (const auto& pair : litrosPorAnio) {
        cout << "Anio: " << pair.first << ", Litros: " << pair.second << endl;
        count++;
        if (count >= 5) {
            break;
        }
    }
    */

    // 3.2. El anio que se podrá vender más vino
    int maxLitros = 0;
    int yearMaxLitros = 0;
    for (int anio = 2020; anio <= 2023; ++anio) {
        int litros = 0;
        for (const auto& vino : ges->getVinos()) {
            litros += vino->getLtsVenta(anio);
        }
        if (litros > maxLitros) {
            maxLitros = litros;
            yearMaxLitros = anio;
        }
    }
    cout << "El anio que se podra vender más vino es: " << yearMaxLitros << " con " << maxLitros << " litros." << endl;

    // 3.3. El anio que se podra obtener mayor monto de venta.
    double maxMonto = 0.0;
    int yearMaxMonto = 0;
    for (int anio = 2020; anio <= 2023; ++anio) {
        double monto = 0.0;
        for (const auto& vino : ges->getVinos()) {
            monto += vino->getMntVenta(anio);
        }
        if (monto > maxMonto) {
            maxMonto = monto;
            yearMaxMonto = anio;
        }
    }
    cout << "El anio que se podra obtener mayor monto de venta es: " << yearMaxMonto << " con $" << maxMonto << "." << endl;
    // Liberar objetos Vino
    for (const auto& vino : ges->getVinos()) {
        delete vino;
    }
    return 0;
}
