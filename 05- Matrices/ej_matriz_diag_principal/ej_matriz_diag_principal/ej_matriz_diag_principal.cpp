#include <iostream>
using namespace std;

int main()
{
    int mat[100][100]{}, n;
    cout << "Inserte la longitud de la matriz: "; cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "\nDigite el numero en la posicion " << i + 1 << ", " << j + 1 << ": ";
            cin >> mat[i][j];
        }
    }

    // Diagonal principal
    cout << "\nLa diagonal principal es: ";
    for (int k = 0; k < n-1; k++) {
        cout << mat[k][k] << ", ";
    }
    cout << mat[n-1][n-1] << endl;


}

