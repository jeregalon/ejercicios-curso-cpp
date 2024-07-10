#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char frase[100] = "";
    cout << "Inserte una frase to chevere: ";
    cin.getline(frase, 100, '\n');

    char sinesp[100] = "";
    int cant_esp = 0;
    for (int i = 0; i < strlen(frase); i++) {
        if (frase[i] != ' ') {
            sinesp[i - cant_esp] = frase[i];
        }
        else {
            cant_esp += 1;
        }
    }

    char revers[100] = "";
    strcat_s(revers, sinesp);
    _strrev(revers);

    if (strcmp(revers, sinesp) == 0) {
        cout << "\nLa frase es palindroma" << endl;
    }
    else {
        cout << "\nLa frase no es palindroma" << endl;
    }

}
