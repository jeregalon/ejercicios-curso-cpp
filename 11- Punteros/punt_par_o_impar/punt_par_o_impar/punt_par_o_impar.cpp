#include <iostream>
using namespace std;

int main()
{
	int num, *dir_num;
	cout << "Digite un numero: ";
	cin >> num;

	dir_num = &num;

	if (*dir_num % 2 == 0) cout << "El numero es par" << endl;
	else cout << "El numero es impar" << endl;

	int enteros[] = { 1,2,3,4,5 }, *dir_ent;
	long largos[] = { 1,2,3,4,5 }, *dir_long;
	float flotantes[] = { 1.0,2.0,3.0,4.0,5.0 }, *dir_flot;
	double dobles[] = { 1.0,2.0,3.0,4.0,5.0 }, *dir_dob;

	dir_ent = enteros;
	dir_long = largos;
	dir_flot = flotantes;
	dir_dob = dobles;

	for (int i = 0; i < 5; i++) {
		cout << "Posicion de memoria [" << i << "]: " << dir_ent++ << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Posicion de memoria [" << i << "]: " << dir_long++ << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Posicion de memoria [" << i << "]: " << dir_flot++ << endl;
	}
	for (int i = 0; i < 5; i++) {
		cout << "Posicion de memoria [" << i << "]: " << dir_dob++ << endl;
	}
	
}
