#include <iostream>
using namespace std;

int suma(int n);

int main()
{
	int ni;
	cout << "Digite el numero de iteraciones: "; cin >> ni;
	cout << suma(ni) << endl;
}

int suma(int n) 
{
	if (n != 1) {
		n += suma(n - 1);
	}
	return n;
}
