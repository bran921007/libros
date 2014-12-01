/*
 * Nodo.h
 *
 *  Created on: 13/10/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;


namespace itla {

class Nodo {

private:
	string nombre;
	int hijos;
	Nodo* siguiente;
	Nodo* primerHijo;
	Nodo* ultimoHijo;

public:
	Nodo();
	void agregarHijo(Nodo* nodo);
	//Nodo* getHijos();
	virtual ~Nodo();


	int getHijos(){
		return hijos;
	}

	void setHijos(int hijos) {
		this->hijos = hijos;
	}

	string getNombre(){
		return nombre;
	}

	void setNombre(string nombre) {
		this->nombre = nombre;
	}

	Nodo* getSiguiente(){
		return siguiente;
	}

	void setSiguiente(Nodo* siguiente) {
		this->siguiente = siguiente;
	}

	Nodo* getPrimerHijo(){
			return primerHijo;
	}

	void setPrimerHijo(Nodo* primerHijo) {
			this->primerHijo = primerHijo;
	}

	Nodo* getUltimoHijo(){
		return ultimoHijo;
	}

	void setUltimoHijo(Nodo* ultimoHijo) {
		this->ultimoHijo = ultimoHijo;
	}

};

} /* namespace itla */

#endif /* NODO_H_ */
