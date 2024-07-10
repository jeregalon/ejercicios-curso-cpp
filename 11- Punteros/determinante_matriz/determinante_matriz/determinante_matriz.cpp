#include <iostream>
#include <stdlib.h>
using namespace std;

float **matriz, dim;
void pedirMatriz();
float hallarDet(float**, int);

int main()
{
    pedirMatriz();

    cout << "El determinante es: " << hallarDet(matriz, dim);

    for (int i = 0; i < dim - 1; i++) { // Eliminando matriz
        delete[] matriz[i];
    }
}

void pedirMatriz()
{
    cout << "Indique la dimensión de la matriz: ";
    cin >> dim;

    matriz = new float*[dim]; // Reservando memoria para las filas

    for (int i = 0; i < dim; i++) {
        matriz[i] = new float[dim]; // Reservando para las columnas
    }

    // Llenando la matriz
    for (int i = 0; i < dim; i++) {
        for (int j = 0; j < dim; j++) {
            cout << "Indique el valor en la posicion: " << i + 1 << ", " << j + 1 << ": ";
            cin >> *(*(matriz + i) + j);
        }
    }
}

float hallarDet(float **matr, int dime)
{
    float detr = 0;
    switch (dime) {
    case 1: detr = matr[0][0]; break;
    default:
        int multiplicador;
        for (int index = 0; index < dime; index++) { // Creando submatriz
       
            if (index % 2 == 0) multiplicador = 1;
            else multiplicador = - 1;

            float** submat;
            submat = new float* [dime - 1];

            for (int i = 0; i < dime - 1; i++) {
                submat[i] = new float[dime - 1];
            }

            for (int i = 1; i < dime; i++) {  // Llenando submatriz
                int k = 0;
                for (int j = 0; j < dime; j++) { 
                    if (j != index) {
                        *(*(submat + i - 1) + k) = matr[i][j];
                        k++;
                    }
                }
            }

            detr += matr[0][index] * multiplicador * hallarDet(submat, dime - 1);

            for (int i = 0; i < dime - 1; i++) { // Eliminando submatriz
                delete[] submat[i];
            }
        }
    }

    return detr;
}
