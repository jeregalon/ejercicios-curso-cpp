#include <iostream>
using namespace std;

template <class TIPO>
float frax(TIPO num);

int main()
{
	double numero;
	cout << "Digite un numero: "; cin >> numero;
	cout << frax(numero) << endl;
}

template <class TIPO>
float frax(TIPO num) {
	return num - trunc(num);
}