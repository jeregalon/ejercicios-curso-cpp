#include <iostream>
using namespace std;

int potencia(int, int);

int main()
{
	int b, e;
	cout << "Indique la base: "; cin >> b;
	cout << "Indique el exponente: "; cin >> e;
	cout << potencia(b, e) << endl;
}

int potencia(int ba, int ex)
{
	int pot;
	if (ex == 1) {
		pot = ba;
	}
	else {
		pot = ba * potencia(ba, ex - 1);
	}
	return pot;
}
