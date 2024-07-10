#define _USE_MATH_DEFINES // sin poner esto al principio no reconoce el M_PI
#include <cmath>
#include <iostream>

double calcularAreaPoligonoRegular(int numLados, double longitudLado) {
    // Calcula el apotema del polígono regular
    double apotema = longitudLado / (2 * tan(M_PI / numLados));

    // Calcula el área utilizando la fórmula del área de un polígono regular
    double area = (numLados * longitudLado * apotema) / 2;

    return area;
}

int main() {
    int numLados;
    double longitudLado;

    // Solicita al usuario el número de lados del polígono regular
    std::cout << "Ingrese el número de lados del polígono regular: ";
    std::cin >> numLados;

    // Solicita al usuario la longitud de cada lado del polígono regular
    std::cout << "Ingrese la longitud de cada lado del polígono regular: ";
    std::cin >> longitudLado;

    // Calcula el área del polígono regular llamando a la función calcularAreaPoligonoRegular
    double area = calcularAreaPoligonoRegular(numLados, longitudLado);

    // Muestra el resultado por pantalla
    std::cout << "El área del polígono regular es: " << area << std::endl;

    return 0;
}
