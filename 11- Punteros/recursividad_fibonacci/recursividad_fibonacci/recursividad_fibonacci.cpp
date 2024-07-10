#include <iostream>
using namespace std;

void mostrarfibo(int, int, int);
int calcularfibo(int);

int main()
{
    int n, m;
    cout << "Indique la cantidad de elemntos de Fibonacci que desea mostrar: ";
    cin >> n;
    cout << "0" << endl;
    cout << "1" << endl;
    mostrarfibo(0, 1, n);

    cout << "Indique que elemento de la serie desea mostrar: ";
    cin >> m;
    cout << calcularfibo(m) << endl;

}

void mostrarfibo(int n_ant, int n_act, int n_iter) {
    if (n_iter > 2) {
        int n_sig;
        n_sig = n_ant + n_act;
        cout << n_sig << endl;
        mostrarfibo(n_act, n_sig, n_iter - 1);
    }
}

int calcularfibo(int n_iter) {
    switch(n_iter) {
    case 1:
        return 0;
        break;
    case 2:
        return 1;
        break;
    default:
        return calcularfibo(n_iter - 1) + calcularfibo(n_iter - 2);
        break;
    }
}
