// Escribe el código necesario para crear la estructura de clases, solo es necesario declarar las clases, y en el main, 
// crear una instancia, no se requieren datos

#include <iostream>

using namespace std;

class Elefante {
public:
	Elefante();
	~Elefante();
	void dibuja();
	void imprime();
};

Elefante::Elefante() {

}

Elefante::~Elefante() {}

void Elefante::dibuja() {
	cout << "El Elefante esta dibujando." << endl;
}

void Elefante::imprime() {
	cout << "Objeto Elefante." << endl;
}


class Pato {
public:
	Pato();
	~Pato();
	void dibuja();
	void imprime();
};

Pato::Pato() {

}

Pato::~Pato() {}

void Pato::dibuja() {
	cout << "El Pato esta dibujando." << endl;
}

void Pato::imprime() {
	cout << "Objeto Pato." << endl;
}


class Leon {
public:
	Leon();
	~Leon();
	void dibuja();
	void imprime();
};

Leon::Leon() {

}

Leon::~Leon() {}

void Leon::dibuja() {
	cout << "El Leon esta dibujando." << endl;
}

void Leon::imprime() {
	cout << "Objeto Leon." << endl;
}

class Animal {
private:
	Elefante objElefante;
	Pato objPato;
	Leon objLeon;
public:
	Animal();
	~Animal();
	void dibuja();
	void imprime();
};

Animal::Animal() {
	this->objElefante = Elefante();
	this->objPato = Pato();
	this->objLeon = Leon();
}

Animal::~Animal() {}

void Animal::dibuja() {
	this->objElefante.dibuja();
	this->objPato.dibuja();
	this->objLeon.dibuja();
}

void Animal::imprime() {
	this->objElefante.imprime();
	this->objPato.imprime();
	this->objLeon.imprime();
}


int main(void) {
	Animal objAnimal = Animal();

	objAnimal.dibuja();
	objAnimal.imprime();

	return 0;
}