#include <iostream>
using namespace std;

int main()
{
    int elegido = 0;
    float R1, R2, R3, R4, R5;
    float Vi, V1, V2, V3, V4, V5;
    float Ii, I1, I2, I3, I4, I5;
    float Rsum = 0;
    string meniu = R"(  Elije uno de estos circuitos:

    1)

    ------------------(+/-)-----------------
    |                  Vi                  |
    |                                      |
    |   Ii                                 |
    |  --->   +  V1  -      +  V2  -       |
    |----------/\/\/\--------/\/\/\--------|
                 R1            R2

    2)

    -----------------(+/-)-----------------
    |                 Vi                  |
    |                                     |
    |            I1                       |
    |           ---> +  V1  -             |
    |  Ii     --------/\/\/\-------       |
    | --->    |         R1        |       |                     
    |_________|  I2               |_______|
              | ---> +  V2  -     |
              --------/\/\/\-------
                        R2

    3)
                              +  V3  -    
    -----------------(+/-)-----/\/\/\-----------
    |                 Vi         R3       <---  |
    |                                      Ii   |
    |            I1                             |
    |           ---> +  V1  -                   |
    |  Ii     --------/\/\/\-------             |
    | --->    |         R1        |             |                     
    |_________|  I2               |_____________|
              | ---> +  V2  -     |
              --------/\/\/\-------
                        R2

    4)
                                       +  V5  -    
    -----------------(+/-)--------------/\/\/\------------------------
    |                 Vi                  R5       <---              |         
    |                                               Ii               |         
    |            I1                           I4                     |
    |           ---> +  V1  -                ---> +  V3  -           |
    |  Ii     --------/\/\/\-------        --------/\/\/\-------     |
    | --->    |         R1        |        |         R3        |     |                           
    |_________|  I2               |________|  I5               |------  
              | ---> +  V2  -     |        | ---> +  V4  -     |
              --------/\/\/\-------        --------/\/\/\-------
                        R2                           R4

    1, 2, 3 o 4: )";

    while (elegido != 1 && elegido != 2 && elegido != 3 && elegido != 4) {
        cout << meniu;
        cin >> elegido;
    }

    switch (elegido) {
    case 1:
        cout << "Escriba el valor de Vi en volts: " << endl;
        cin >> Vi;
        cout << "Escriba el valor de R1 en ohms: " << endl;
        cin >> R1;
        cout << "Escriba el valor de R2 en ohms: " << endl;
        cin >> R2;
        
        Rsum = R1 + R2;
        V1 = Vi * R1 / Rsum;
        V2 = Vi * R2 / Rsum;
        Ii = Vi / Rsum;

        cout << "Ii = " << Ii << " amperes" << endl;
        cout << "V1 = " << V1 << " volts" << endl;
        cout << "V2 = " << V2 << " volts" << endl;

        break;

    default:
        cout << "En construcción :)";
    }

    
}

