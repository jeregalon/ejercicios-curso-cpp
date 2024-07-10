#include <iostream>
using namespace std;

int main()
{
	int mat[2][2]{};

	// Llenando la matriz
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << "\nDigite un numero en la pos: " << i+1 << ", " << j+1 << ": ";
			cin >> mat[i][j];
		}
	}

	int mat2[2][2]{};

	// Copiando el contenido
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			mat2[i][j] = mat[i][j];
		}
	}

	// Mostrando la segunda matriz
	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 2; j++) {
			cout << mat2[i][j] << ", ";
		}
		cout << "\n";
	}
}
