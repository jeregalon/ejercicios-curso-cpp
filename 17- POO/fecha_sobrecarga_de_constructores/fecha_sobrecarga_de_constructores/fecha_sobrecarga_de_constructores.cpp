#include <iostream>
using namespace std;

class Fecha {
private: //atributos
	int dia, mes, anno;
public: //metodos
	Fecha(int, int, int); // Constructor 1
	Fecha(long); // Constructor 2
	void mostrarFecha();
};

// Constructor 1
Fecha::Fecha(int _dia, int _mes, int _anno)
{
	dia = _dia; mes = _mes; anno = _anno;

}

// Constructor 2
Fecha::Fecha(long _fecha) {
	anno = int(_fecha / 10000);
	mes = int((_fecha - anno * 10000) / 100);
	dia = int(_fecha - anno * 10000 - mes * 100);
}

void Fecha::mostrarFecha()
{
	cout << dia << "/" << mes << "/" << anno << endl;
}

int main()
{
	Fecha hoy(24, 3, 2024);
	Fecha manana(20240325);
	hoy.mostrarFecha();
	manana.mostrarFecha();
}


