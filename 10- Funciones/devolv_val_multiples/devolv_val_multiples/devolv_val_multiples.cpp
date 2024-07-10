#include <iostream>
using namespace std;

void calcular(int&, int&, int&, int&);

int main()
{
    int num1, num2, suma = 0, product = 0;
    cout << "Digite dos numeros: ";
    cin >> num1 >> num2;
    calcular(num1, num2, suma, product);
    cout << "La suma de los dos numeros es: " << suma << endl;
    cout << "El producto de los dos numeros es: " << product << endl;
}

void calcular(int& n1, int& n2, int& sum, int& prod) {
    sum = n1 + n2;
    prod = n1 * n2;
}
