#include <iostream>

double calcularLogaritmoNatural(double x) {
    double resultado = 0.0;
    double terminoActual = (x - 1) / (x + 1);
    double terminoAnterior = 0.0;
    double terminoAnteriorCuadrado = 0.0;
    double denominador = 1.0;
    int n = 1;

    while (terminoActual != terminoAnterior) {
        resultado += terminoActual / denominador;
        terminoAnterior = terminoActual;

        n += 2;
        denominador *= n;

        terminoAnteriorCuadrado = terminoAnterior * terminoAnterior;
        terminoActual = terminoAnterior * terminoAnteriorCuadrado * terminoAnteriorCuadrado;
    }

    resultado *= 2.0;

    return resultado;
}

double calcularExponencial(double x) {
    double resultado = 1.0;
    double terminoActual = 1.0;
    int n = 1;

    while (terminoActual != 0.0) {
        resultado += terminoActual;
        terminoActual *= x / n;
        n++;
    }

    return resultado;
}

double calcularPotenciaDecimal(double base, double exponente) {
    double resultado = calcularExponencial(exponente * calcularLogaritmoNatural(base));
    return resultado;
}

int main() {
    double base = 2.5;
    double exponente = 1.5;

    double resultado = calcularPotenciaDecimal(base, exponente);

    std::cout << "El resultado de " << base << " elevado a la potencia " << exponente << " es: " << resultado << std::endl;

    return 0;
}