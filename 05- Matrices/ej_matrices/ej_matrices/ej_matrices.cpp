#include <iostream>
using namespace std;

int main()
{
    int matrix[100][100]{};
    int matrix_tr[100][100]{};
    int nfil, ncol;
    bool sim = 1;
    cout << "Digite el numero de filas: "; cin >> nfil;
    cout << "\nDigite el numero de columnas: "; cin >> ncol;
    
    // Constituir la matriz
    for (int i = 0; i < nfil; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << "\nDigite el numero en posicion " << i << ", " << j << ": ";
            cin >> matrix[i][j];
        }
    }

    // Mostrar la matriz
    cout << "Matriz normal: " << endl;
    for (int i = 0; i < nfil; i++) {
        for (int j = 0; j < ncol; j++) {
            cout << matrix[i][j] << ", ";
        }
        cout << endl;
    }

    // Constituir la matriz traspuesta
    for (int i = 0; i < nfil; i++) {
        for (int j = 0; j < ncol; j++) {
            matrix_tr[j][i] = matrix[i][j];
        }
    }

    // Mostrar la matriz traspuesta
    cout << "\nMatriz traspuesta: " << endl;
    for (int i = 0; i < ncol; i++) {
        for (int j = 0; j < nfil; j++) {
            cout << matrix_tr[i][j] << ", ";
        }
        cout << endl;
    }

    // Determinar si es simétrica
    if (nfil == ncol) {
        for (int i = 0; i < nfil; i++) {
            for (int j = 0; j < ncol; j++) {
                if (matrix[i][j] != matrix_tr[i][j]) {
                    sim = 0;
                    break;
                }
            }
        }
        if (sim) cout << "\nMatriz simetrica!" << endl;
        else cout << "\nMatriz no simetrica!" << endl;
    }
    else {
        cout << "\nMatriz no cuadrada" << endl;
    }

}
