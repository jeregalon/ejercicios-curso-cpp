#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char cad1[] = "Esto es una cadena";
	char cad2[] = " de ejemplo";
	char cad3[30] = "";
	strcpy_s(cad3, cad1); // VS me recomienda usar esta en vez de strcpy
	strcat_s(cad3, cad2); // VS me recomienda usar esta en vez de strcat
	cout << cad3 << endl;

	char nombre[10] = "";
	cout << "Cual es tu nombre, humano: ";
	cin.getline(nombre, 10, '\n');
	cout << "\nHola que tal " << nombre << endl;

}
