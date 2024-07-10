#include <iostream>
#include <json/json.h>
#include <json/value.h>
#include <fstream>
#include <string>

int main() {
    // Crear un objeto JSON
    Json::Value jsonData;

    // Agregar datos al objeto JSON
    jsonData["nombre"] = "Ejemplo";
    jsonData["edad"] = 25;
    jsonData["ciudad"] = "Ciudad Ejemplo";

    /*// Crear un objeto JSON para datos adicionales
    Json::Value datosAdicionales;
    datosAdicionales["puntos"] = 100;
    datosAdicionales["nivel"] = 5;

    // Agregar el objeto de datos adicionales al objeto principal
    jsonData["datosAdicionales"] = datosAdicionales;

    // Escribir el objeto JSON en un archivo
    std::ofstream archivo("datos.json");
    archivo << jsonData;
    archivo.close();

    std::cout << "Datos guardados en el archivo 'datos.json'" << std::endl;*/

    return 0;
}