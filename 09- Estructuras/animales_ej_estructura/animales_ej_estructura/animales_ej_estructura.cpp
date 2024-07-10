// a medio hacer

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

struct animal {
    string nombre;
    int fuerza;
    int velocidad;
}animal1, animal2, animal3;

int main()
{
    fflush(stdin);
    // Animal 1
    cout << "Inserte el nombre de Animal 1: ";
    cin >> animal1.nombre;
    cout << "\nInserte la fuerza de Animal 1: ";
    cin >> animal1.fuerza;
    cout << "\nInserte la velocidad de Animal 1: ";
    cin >> animal1.velocidad;

    // Animal 2
    cout << "\nInserte el nombre de Animal 2: ";
    cin >> animal2.nombre;
    cout << "\nInserte la fuerza de Animal 2: ";
    cin >> animal2.fuerza;
    cout << "\nInserte la velocidad de Animal 2: ";
    cin >> animal2.velocidad;

    // Animal 3
    cout << "\nInserte el nombre de Animal 3: ";
    cin >> animal3.nombre;
    cout << "\nInserte la fuerza de Animal 3: ";
    cin >> animal3.fuerza;
    cout << "\nInserte la velocidad de Animal 3: ";
    cin >> animal3.velocidad;


    return 0;
}
