// TODO: Implementarlo con funciones

#include <iostream>
using namespace std;

int main()
{
    int mat1[3][3] = { 1,2,4, 6,8,9, 3,4,5 };
    int mat2[3][3] = { 2,3,8, 1,3,9, 6,2,7 };
    int mat4[3][3]{};

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            mat4[i][j] = mat1[i][0] * mat2[0][j] + mat1[i][1] * mat2[1][j] + mat1[i][2] * mat2[2][j];
        }
    }

    // Mostrar la matriz
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << mat4[i][j] << ", ";
        }
        cout << endl;
    }
}

