#include <iostream>
#include <random>
using namespace std;

int main()
{
    int mat[100][100]{}, n;
    random_device rd; // obtener una semilla inicial
    mt19937 generator(rd()); // motor de generación de números pseudoaleatorios
    uniform_int_distribution <int> distribution(1, 100); // rango

    cout << "Inserte la longitud de la matriz: "; cin >> n;
        
    if (n <= 20) {
        // Generar una matriz de números aleatorios
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                mat[i][j] = distribution(generator);
            }
        }

        // Mostrar la matriz
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << mat[i][j] << ", ";
            }
            cout << "\n";
        }
    }
    else {
        cout << "Ups! Intenta un numero mas corto para la proxima";
    }

    


}

