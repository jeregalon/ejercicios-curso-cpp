#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float a, b, c, D, x1, x2;

int main()
{
    cout << "Introduzca el término a de su ecuación: "; cin >> a;
    cout << "\n\n¡Listo! Ahora el b: "; cin >> b;
    cout << "\n\n¡Vamos! ¿Qué esperas para poner el c? "; cin >> c;

    D = pow(b, 2) - 4 * a * c;

    if (D > 0) {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);

        cout << "\n\nx1 = " << x1;
        cout << "\nx2 = " << x2 << "\n";
    }
    else {
        cout << "\nDiscriminante negativo.\nNo hay presupuesto para números imaginarios :(\n";
    }
    

}

