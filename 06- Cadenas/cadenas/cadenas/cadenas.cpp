// Criptografía código César

#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;

int main()
{
    char frase[100] = "";
    int desp = 0;

    cout << "Escribe una frase que quieras encriptar: ";
    cin.getline(frase, 100, '\n');
    cout << "\nEscriba el desplazamiento que desea: ";
    cin >> desp;

    _strlwr_s(frase);

    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] > 96 && frase[i] < 123) { // solo letras minúsculas
            if (frase[i] + desp > 122) {
                frase[i] = frase[i] + desp - 26;
            }
            else {
                frase[i] += desp;
            }
          
        }
        
    }

    cout << "\n" << frase << endl;
}
