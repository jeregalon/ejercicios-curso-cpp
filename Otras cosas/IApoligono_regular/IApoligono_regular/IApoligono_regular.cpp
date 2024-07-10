#define _USE_MATH_DEFINES // sin poner esto al principio no reconoce el M_PI
#include <cmath>
#include <iostream>

double calcularAreaPoligonoRegular(int numLados, double longitudLado) {
    // Calcula el apotema del pol�gono regular
    double apotema = longitudLado / (2 * tan(M_PI / numLados));

    // Calcula el �rea utilizando la f�rmula del �rea de un pol�gono regular
    double area = (numLados * longitudLado * apotema) / 2;

    return area;
}

int main() {
    int numLados;
    double longitudLado;

    // Solicita al usuario el n�mero de lados del pol�gono regular
    std::cout << "Ingrese el n�mero de lados del pol�gono regular: ";
    std::cin >> numLados;

    // Solicita al usuario la longitud de cada lado del pol�gono regular
    std::cout << "Ingrese la longitud de cada lado del pol�gono regular: ";
    std::cin >> longitudLado;

    // Calcula el �rea del pol�gono regular llamando a la funci�n calcularAreaPoligonoRegular
    double area = calcularAreaPoligonoRegular(numLados, longitudLado);

    // Muestra el resultado por pantalla
    std::cout << "El �rea del pol�gono regular es: " << area << std::endl;

    return 0;
}
