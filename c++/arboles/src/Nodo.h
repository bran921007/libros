/*
 * Nodo.h
 *
 *  Created on: 14/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
namespace std {

class Nodo {

private:
	Nodo* siguiente;
	string nombre;
	int hijos;
public:
	void agregarHijo(Nodo* nodo);
	Nodo* getHijos();
	virtual ~Nodo();
	Nodo();

	void setHijos(int hijos) {
		this->hijos = hijos;
	}

	const string& getNombre() const {
		return nombre;
	}

	void setNombre(const string& nombre) {
		this->nombre = nombre;
	}

	const Nodo*& getSiguiente() const {
		return siguiente;
	}

	void setSiguiente(const Nodo*& siguiente) {
		this->siguiente = siguiente;
	}
};

} /* namespace std */

#endif /* NODO_H_ */
