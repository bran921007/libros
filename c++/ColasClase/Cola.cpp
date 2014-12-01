/*
 * Cola.cpp
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#include "Cola.h"

namespace itla {

Nodo* Cola::extraer()
{
	Nodo* retorno = primerElemento;
	if(primerElemento == NULL)
	{
		return NULL;
	}else if(primerElemento ->getSiguiente() != NULL){
		primerElemento = primerElemento -> getSiguiente();
	}else{
		primerElemento = NULL;
	}
	return retorno;
}

void Cola::agregar(Nodo* nodo)
{
	if(primerElemento == NULL)
	{
		ultimoElemento = nodo;
		primerElemento = nodo;
	}else{

		ultimoElemento->setSiguiente(nodo);
		ultimoElemento = nodo;
	}
}

Cola::Cola() {
	// TODO Auto-generated constructor stub
	primerElemento = NULL;
	ultimoElemento = NULL;
}

Cola::~Cola() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
