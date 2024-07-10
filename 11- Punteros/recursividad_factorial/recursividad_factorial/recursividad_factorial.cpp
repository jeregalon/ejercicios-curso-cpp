#include <iostream>
using namespace std;

int factorial(int num);

int main()
{
    int n, f;
    cout << "Digite un numero: "; 
    cin >> n;

    cout << factorial(n);
}

int factorial(int n) 
{
    if (n == 0) { // Caso base
        n = 1;
    }
    else { // Caso general
        n = n * factorial(n - 1);
    }
    return n;
}
