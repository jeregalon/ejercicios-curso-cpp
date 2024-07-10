#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

float cateto1, cateto2, a, hipo;

int main()
{
    cout << "Introduzca el primer cateto: "; cin >> cateto1;
    cout << "\n\nAhora el segundo: "; cin >> cateto2;
    cout << "\n\nBien. Ahora el tercero: "; cin >> a;
    cout << " Hombree que es broma";
    hipo = sqrt(pow(cateto1, 2) + pow(cateto2, 2));
    cout << "\n\nTu hipotenusa es: " << hipo << "\n";

}