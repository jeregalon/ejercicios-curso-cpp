#include <iostream>
using namespace std;

int main()
{
    float numeros[5];
    cout << "Escribe un numerito: "; cin >> numeros[0];
    cout << "\nOtro: "; cin >> numeros[1];
    cout << "\nOtro m�s: "; cin >> numeros[2];
    cout << "\nOtrooooo: "; cin >> numeros[3];
    cout << "\nEl �ltimo: "; cin >> numeros[4];

    float suma = 0;
    float prod = 1;
    float invnumeros[5];
    float elmayor = 0.0;
    float el_numero_que_es_igual_a_la_suma_de_los_otros_numeros = 0.0;

    for (int i=0; i<5; i++) {
        suma += numeros[i];
        prod *= numeros[i];
        invnumeros[i] = numeros[4-i];
        if (numeros[i] > elmayor) {
            elmayor = numeros[i];
        }
    }

    for (int i = 0; i < 5; i++) {
        if (numeros[i] == suma - numeros[i]) {
            el_numero_que_es_igual_a_la_suma_de_los_otros_numeros = numeros[i];
        }
    }

    float palindromo[10];
    for (int i = 0; i < 5; i++) {
        palindromo[i] = numeros[i];
        palindromo[i + 5] = invnumeros[i];
    }

    float palindromox2[10];
    for (int i = 0; i < 10; i++) {
        palindromox2[i] = palindromo[i] * 2;
    }

    cout << "\nSuma = " << suma << "\n";
    cout << "\nProducto = " << prod << "\n";

    cout << "\nArreglo invertido: ";
    for (int i = 0; i < 4; i++) {
        cout << invnumeros[i] << ", ";
    }
    cout << invnumeros[4] << "\n";

    cout << "\nMayor n�mero: " << elmayor << "\n";

    cout << "\nArreglo pal�ndromo: ";
    for (int i = 0; i < 9; i++) {
        cout << palindromo[i] << ", ";
    }
    cout << palindromo[9] << "\n";

    cout << "\nArreglo pal�ndromo x2: ";
    for (int i = 0; i < 9; i++) {
        cout << palindromox2[i] << ", ";
    }
    cout << palindromox2[9] << "\n";

    if (el_numero_que_es_igual_a_la_suma_de_los_otros_numeros != 0) cout << "\nN�mero que es igual a la suma de los otros n�meros: " << el_numero_que_es_igual_a_la_suma_de_los_otros_numeros << "\n";
}

