#include <iostream>
using namespace std;

void esSim(int m[][10], int);

int main()
{
	int mat[10][10], dim;
	cout << "Digite la dimension de la matriz: "; cin >> dim;

	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			cout << "Introduzca el elemento " << i + 1 << ", " << j + 1 << " de la matriz: ";
			cin >> mat[i][j];
		}
	}

	if (dim <= 10) {
		esSim(mat, dim);
	}
}

void esSim(int m[][10], int dim)
{
	bool es_sim = 1;
	for (int i = 0; i < dim; i++) {
		for (int j = 0; j < dim; j++) {
			if (m[i][j] != m[j][i]) {
				es_sim = 0;
			}
		}
	}
	if (es_sim == 1) cout << "La matriz es simetrica" << endl;
	else cout << "La matriz NO es simetrica" << endl;

}
