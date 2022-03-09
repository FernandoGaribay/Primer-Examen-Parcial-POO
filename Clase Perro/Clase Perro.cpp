#include <iostream>
#pragma warning (disable:4996)

using namespace std;

class Perro {
private:
	char const* nombre;
public:
	Perro();
	~Perro();
	void ladrar();
	void setNombre(char const*);
	char const* getNombre();
};

Perro::Perro() {

}

Perro::~Perro() {}

void Perro::ladrar() {
	cout << nombre <<": Guau Guau!" << endl;
}

void Perro::setNombre(char const* nombre_) {
	nombre = nombre_;
}

char const* Perro::getNombre() {
	return nombre;
}


int main()
{
	Perro manchas = Perro();

	manchas.setNombre("Manchas");
	manchas.ladrar();

	return 0;
}
