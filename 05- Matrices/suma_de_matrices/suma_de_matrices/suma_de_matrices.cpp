#include <iostream>
using namespace std;

int main()
{
    int mat1[3][3] = { 1,2,3, 4,5,6, 7,8,9 };
    int mat2[3][3] = { 2,3,9, 8,6,7, 4,5,2 };
    int matsum[3][3]{};

    // Sumar las matrices
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            matsum[i][j] = mat1[i][j] + mat2[i][j];
        }
    }

    // Mostrar la suma
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << matsum[i][j] << ", ";
        }
        cout << endl;
    }
}

