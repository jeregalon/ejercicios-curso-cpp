#include <iostream>
using namespace std;

int edad;
char sexo[10];
char localidad[20];

int main()
{
    cout << "Introduce tu edad o te mato: ";
    cin >> edad;
    cout << "\nBien. Ahora tu sexo: ";
    cin >> sexo;
    cout << "\nBien. Ahora tu localidad: ";
    cin >> localidad;

    cout << "\n\nEdad: " << edad;
    cout << "\n\nSexo: " << sexo;
    cout << "\n\nLocalidad: " << localidad;
}

