// Al final decidí hacer un rombo 

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Digite la longitud de lados del rombo: "; cin >> n;
    if (n <= 20) {

        // Triángulo superior

        for (int i = 0; i < n - 1; i++) {
            cout << "  ";
        }
        cout << "*" << endl;

        for (int i = 1; i < n; i++) {
            // Poner espacios (n-1-i) espacios, un asterisco, i espacios, un asterisco
            for (int j = 0; j < n - 1 - i; j++) {
                cout << "  ";
            }
            cout << "*";
            for (int j = 0; j < i * 2 - 1; j++) {
                cout << "  ";
            }
            cout << " *";
            cout << endl;
        }

        // Triángulo inferior

        for (int i = n - 2; i > 0; i--) {
            // Poner espacios (l-1-i) espacios, un asterisco, i espacios, un asterisco
            for (int j = 0; j < n - 1 - i; j++) {
                cout << "  ";
            }
            cout << "*";
            for (int j = 0; j < i * 2 - 1; j++) {
                cout << "  ";
            }
            cout << " *";
            cout << endl;
        }

        for (int i = 0; i < n - 1; i++) {
            cout << "  ";
        }
        cout << "*" << endl;


    }

}
