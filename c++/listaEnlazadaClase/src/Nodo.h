/*
 * Nodo.h
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
using namespace std;
#include <string>;

namespace itla {

class Nodo {

private:
	string nombre;
	Nodo* siguiente;
public:
	Nodo(string nombre);
	virtual ~Nodo();

	string getNombre() const {
		return nombre;
	}

	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	Nodo* getSiguiente() {
		return siguiente;
	}

	void setSiguiente(Nodo* siguiente) {
		this->siguiente = siguiente;
	}
};

} /* namespace std */

#endif /* NODO_H_ */
