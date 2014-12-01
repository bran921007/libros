/*
 * Lista.cpp
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#include "Lista.h"


namespace itla {

Lista::Lista() {
	// TODO Auto-generated constructor stub
	primerElemento = NULL;
	ultimoElemento = NULL;

}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */

void itla::Lista::agregar(Nodo* nodo) {

	if(primerElemento == NULL)// Si la lista esta vacia
	{
		primerElemento = nodo;
		ultimoElemento = nodo;
	}else{
		ultimoElemento ->setSiguiente(nodo);
		ultimoElemento = nodo;
	}
}
