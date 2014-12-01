/*
 * Nodo.cpp
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#include "Nodo.h"

namespace itla {

string Nodo::getNombre(){
	return nombre;
}

Nodo* Nodo::getSiguiente()
{
	return siguiente;
}
Nodo* Nodo::extraer()
{
	return siguiente;
}

Nodo::Nodo(string nombre) {
	// TODO Auto-generated constructor stub
	this->nombre = nombre;
	siguiente = NULL;
}

Nodo::~Nodo() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
