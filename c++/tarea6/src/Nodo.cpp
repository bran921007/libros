/*
 * Nodo.cpp
 *
 *  Created on: 13/10/2014
 *      Author: Franco
 */

#include "Nodo.h"

namespace itla {

Nodo::Nodo() {
	hijos = 0;
	siguiente = NULL;
	primerHijo = NULL;
	ultimoHijo = NULL;
}

void Nodo::agregarHijo(Nodo* nodo)
{
	if(primerHijo == NULL)
	{
		primerHijo = nodo;
		ultimoHijo = nodo;
	}else{
		ultimoHijo->siguiente = nodo;
		ultimoHijo = nodo;
	}
}

Nodo::~Nodo() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
