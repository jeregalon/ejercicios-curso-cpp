#include <iostream>
#include <stdlib.h>
using namespace std;

int numCalif, *calif;
void pedirNotas();
int calcularPromedio(int*, int);

int main()
{
	pedirNotas();
	cout << "El promedio es: " << calcularPromedio(calif, numCalif) << endl;
	delete[] calif;
}

void pedirNotas()
{
	cout << "Indique el numero de notas: ";
	cin >> numCalif;

	calif = new int[numCalif];

	for (int i = 0; i < numCalif; i++) {
		cout << "Indique la nota de la Materia No." << i + 1 << ": ";
		cin >> calif[i];
	}
}

int calcularPromedio(int *dirNum, int nElem)
{
	int suma = 0;
	for (int i = 0; i < nElem; i++) {
		suma += *dirNum++;
	}
	return suma / nElem;
}
