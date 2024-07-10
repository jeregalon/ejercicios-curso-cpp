// ejemplo2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

float a, b, c, d;

int main()
{
    cout << "Anda, introduce un número: "; cin >> a;
    cout << "\nOtro: "; cin >> b;
    cout << "\nOtro más: "; cin >> c;
    cout << "\nEl último: "; cin >> d;
    cout << "\nBien hecho";

    cout << (a+b) / (c+d);
}

