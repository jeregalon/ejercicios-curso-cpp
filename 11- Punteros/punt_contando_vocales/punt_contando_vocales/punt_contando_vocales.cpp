#include <iostream>
#include <string.h>
using namespace std;

char nombre[30];
void pedirNombre();
int contarVoc(char*);

int main()
{
	pedirNombre();
	cout << "La cantidad de vocales es: " << contarVoc(nombre);
}

void pedirNombre()
{
	cout << "Digite su nombre: ";
	cin.getline(nombre, 30, '\n');
	_strupr_s(nombre);
}

int contarVoc(char* nom)
{
	int cont = 0;

	while (*nom) { // Mientras *nom no sea '\0'
		switch (*nom)
		{
		case 'A':
		case 'E':
		case 'I':
		case 'O':
		case 'U': cont++;
		}
		nom++;
	}
	return cont;
}
