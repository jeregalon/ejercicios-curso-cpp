#include <iostream>
using namespace std;

int main()
{
    int numeros[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1};
    
    for (int i = 0; i < 19; i++) {
        int nuevonum;
        cout << "\nDigite un número: "; cin >> nuevonum;
        system("cls");
        for (int j = 0; j < 19; j++) {
            if (nuevonum != 0) {
                if (nuevonum > numeros[j+1]) {
                    numeros[j] = numeros[j + 1];
                    numeros[j + 1] = nuevonum;
                }
                else {
                    numeros[j] = nuevonum;
                }
            }
        }
        cout << "[" << numeros[0];
        for (int k = 1; k < 20; k++) cout << ", " << numeros[k];
        cout << "]";
    }
}