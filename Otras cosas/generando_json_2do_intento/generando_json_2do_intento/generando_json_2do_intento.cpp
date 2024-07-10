#include <iostream>
#include <nlohmann/json.hpp>
#include <fstream>
using namespace std; using namespace nlohmann;

int main()
{
    nlohmann::json jsonData;
    jsonData["nombre"] = "Ejemplo";
    jsonData["edad"] = 25;
    jsonData["ciudad"] = "Ciudad Ejemplo";

    nlohmann::json datosAdicionales;
    datosAdicionales["puntos"] = 100;
    datosAdicionales["nivel"] = 5;

    // Agregar el objeto de datos adicionales al objeto principal
    jsonData["datosAdicionales"] = datosAdicionales;

    // Escribir el objeto JSON en un archivo
    std::ofstream archivo("datos.json");
    archivo << jsonData;
    archivo.close();

    std::cout << "Datos guardados en el archivo 'datos.json'" << std::endl;
}
