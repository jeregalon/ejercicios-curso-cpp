#include <iostream>
using namespace std;

class Rectangulo {
private: //atributos
	float largo, ancho;
public: //métodos
	Rectangulo(float, float); //Constructor
	float area();
	float perimetro();
};

//Constructor para inicializar los atributos
Rectangulo::Rectangulo(float _largo, float _ancho) {
	largo = _largo;
	ancho = _ancho;
}

float Rectangulo::area() {
	return largo * ancho;
}

float Rectangulo::perimetro() {
	return 2 * (largo + ancho);
}

int main()
{
	Rectangulo pepe(4.5, 6.7);
	Rectangulo alcides(2.2, 3.8);

	cout << "El area de pepe es: " << pepe.area() << endl;
	cout << "El perimetro de pepe es: " << pepe.perimetro() << endl;
	cout << "El area de alcides es: " << alcides.area() << endl;
	cout << "El perimetro de alcides es: " << alcides.perimetro() << endl;
}
