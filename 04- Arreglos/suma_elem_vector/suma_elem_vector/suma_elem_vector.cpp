#include <iostream>
using namespace std;

void sumar(int vec[], int tam);

int main()
{
	int vc[10] = {};

	for (int i = 0; i < 10; i++) {
		cout << "Digite el elemento numero " << i << " del vector: ";
		cin >> vc[i];
	}

	sumar(vc, 10);
	
}

void sumar(int vec[], int tam)
{
	int sum = 0;
	for (int i = 0; i < 10; i++) {
		sum += vec[i];
	}
	cout << "La suma es: " << sum << endl;
}
