#include <iostream>
using namespace std;

template <class TIPOD>
void multip(TIPOD num1, TIPOD num2);

float cuad(float num);
void elev(int base, int exp);

int main()
{
    float n1;
    float n2;
    cout << "Digite dos numeros: ";
    cin >> n1 >> n2;

    multip(n1, n2); // Los dos datos tienen que ser del mismo tipo
    cout << "El cuadrado del primer número es: " << cuad(n1) << endl;
    cout << "El cuadrado del segundo número es: " << cuad(n2) << endl;

    int b, e;
    cout << "Digite la base: "; cin >> b;
    cout << "Digite el exponente: "; cin >> e;
    elev(b, e);

}

template<class TIPOD>
void multip(TIPOD num1, TIPOD num2)
{
    cout << num1 * num2 << endl;
}

float cuad(float num)
{
    return num * num;
}

void elev(int base, int exp)
{
    int valor = 1;

    for (int i = 0; i < exp; i++) {
        valor *= base;
    }
    cout << valor << endl;
}
