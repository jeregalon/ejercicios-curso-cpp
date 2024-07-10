#include <iostream>
#include <stdlib.h>
using namespace std;

int *datos, longArreglo;
void pedirDatos();
void ordenarDatos(int*, int);
void imprimirDatos();

int main()
{
	pedirDatos();
	ordenarDatos(datos, longArreglo);
	imprimirDatos();
}

void pedirDatos()
{
	cout << "Indique la longitud del arreglo: ";
	cin >> longArreglo;

	datos = new int[longArreglo];

	for (int i = 0; i < longArreglo; i++) {
		cout << "Indique el numero en la posicion [" << i + 1 << "]: ";
		cin >> datos[i];
	}
}

void ordenarDatos(int *dirdatos, int numdatos)
{
	int aux;
	for (int i = 0; i < numdatos; i++) {
		for (int j = 0; j < numdatos - 1; j++){
			if (*(dirdatos + j) > *(dirdatos + j + 1)) {
				aux = *(dirdatos + j + 1);
				*(dirdatos + j + 1) = *(dirdatos + j);
				*(dirdatos + j) = aux;
			}
		}
	}
}

void imprimirDatos()
{
	cout << "Arreglo ordenado: ";
	for (int i = 0; i < longArreglo - 1; i++) {
		cout << *datos++ << ", ";
	}
	cout << *datos << endl;
}
