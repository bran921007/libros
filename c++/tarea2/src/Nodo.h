/*
 * Nodo.h
 *
 *  Created on: 18/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
using namespace std;
#include <iostream>
#include <string>;
#include <cstdlib>;

namespace itla {

class Nodo {

private:
	int indice;
	string articulo;
	int cantidad;
	Nodo* siguiente;
public:
	Nodo();
	virtual ~Nodo();

	string getArticulo() {
		return articulo;
	}

	void setArticulo(string articulo) {
		this->articulo = articulo;
	}

	int getCantidad() {
		return cantidad;
	}

	void setCantidad(int cantidad) {
		this->cantidad = cantidad;
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

} /* namespace std */

#endif /* NODO_H_ */
