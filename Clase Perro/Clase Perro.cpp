#include <iostream>
#pragma warning (disable:4996)

using namespace std;

class Perro { // Clase "Perro"
private:
	char const* nombre;
public:
	Perro(); // Constructor por defecto
	~Perro(); // Destructor
	void ladrar();
	void setNombre(char const*); // Set del atributo "nombre"
	char const* getNombre(); // Get del atributo "nombre"
};

Perro::Perro() {}

Perro::~Perro() {}

void Perro::ladrar() {
	cout << getNombre() <<": Guau Guau!" << endl;
}

void Perro::setNombre(char const* nombre_) { // Desarrollo de la funcion Set
	nombre = nombre_;
}

char const* Perro::getNombre() { // Desarrollo de la funcion Get
	return nombre;
}


int main()
{
	Perro objPerro = Perro(); // Instancia de la clase "Perro"

	objPerro.setNombre("Manchas");
	objPerro.ladrar();

	return 0;
}
