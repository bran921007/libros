/*
 * Nodo.h
 *
 *  Created on: 30/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
#include <cstdlib>
#include <fstream>
#include <iostream>
using namespace std;

namespace itla {

class Nodo {

private:
	int indice;
	string nombre;
	int telefono;
	Nodo* siguiente;

public:
	Nodo();
	virtual ~Nodo();

	string getNombre(){
		return nombre;
	}

	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	int getTelefono(){
		return telefono;
	}

	void setTelefono(int telefono) {
		this->telefono = telefono;
	}

	Nodo* getSiguiente(){
		return siguiente;
	}

	void setSiguiente(Nodo* siguiente) {
		this->siguiente = siguiente;
	}

	int getIndice(){
		return indice;
	}

	void setIndice(int indice) {
		this->indice = indice;
	}
};

} /* namespace itla */

#endif /* NODO_H_ */
