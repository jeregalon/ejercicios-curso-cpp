#include <iostream>
using namespace std;

class Tiempo {
private: //atributos
	int hor, min, seg;
public: //metodos
	Tiempo(int, int, int); // Constructor 1
	Tiempo(long); // Constructor 2
	void mostrarTiempo();
};

Tiempo::Tiempo(int _hor, int _min, int _seg)
{
	hor = _hor; min = _min; seg = _seg;
}

Tiempo::Tiempo(long _segundos)
{
	hor = int(_segundos / 3600);
	min = int((_segundos - hor * 3600) / 60);
	seg = int(_segundos - hor * 3600 - min * 60);
}

void Tiempo::mostrarTiempo()
{
	cout << hor << " horas" << endl;
	cout << min << " minutos" << endl;
	cout << seg << " segundos" << endl;
}

int main()
{
	Tiempo t1(43, 56, 42);
	Tiempo t2(848271232);
	t2.mostrarTiempo();
}


