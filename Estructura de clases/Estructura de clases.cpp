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

}

void Elefante::imprime() {

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

}

void Pato::imprime() {

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

}

void Leon::imprime() {

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

}

void Animal::imprime() {

}


int main(void) {

	return 0;
}