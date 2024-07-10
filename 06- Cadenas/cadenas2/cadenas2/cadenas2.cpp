#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	char palabra1[10] = "";
	char palabra2[10] = "";

	cout << "Digite una palabra: ";	cin >> palabra1;
	cout << "\nDigite otra palabra: ";	cin >> palabra2;

	if (strcmp(palabra1, palabra2) != 0) {
		if (strcmp(palabra1, palabra2) > 0) cout << "\n" << palabra1 << " es mayor alfabeticamente" << endl;
		else cout << "\n" << palabra2 << " es mayor alfabeticamente" << endl;
	}
	else {
		cout << "\nAmbas palabras son identicas" << endl;
	}
}
