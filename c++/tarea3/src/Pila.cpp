/*
 * Pila.cpp
 *
 *  Created on: 29/9/2014
 *      Author: Franco
 */

#include "Pila.h"

namespace itla {

Pila::Pila() {
	// TODO Auto-generated constructor stub
	ultimoElemento = NULL;
	primerElemento = NULL;

}

void Pila::agregar(Nodo* elemento) {

	if(ultimoElemento == NULL)
	{
		primerElemento = elemento;
		ultimoElemento = elemento;
	}else
	{
		elemento->setAnterior(ultimoElemento);
		ultimoElemento = elemento;
	}

}

Nodo* Pila::buscar(string categoria) {
	Nodo* buscar = getUltimoElemento();
	while((buscar != NULL)and(buscar->getCategoria() != categoria))
	{
		buscar = buscar->getAnterior();
	}
	return buscar;
}

void Pila::eliminar(int elemento) {

}

Nodo* Pila::obtener() {

	 Nodo* retorno = ultimoElemento;
	 if(ultimoElemento == NULL)
	 {
	  return NULL;
	 }else if(ultimoElemento->getAnterior() != NULL)
	 {
		 ultimoElemento = ultimoElemento->getAnterior();
	 }else{
		 ultimoElemento = NULL;
	 }

	 return retorno;
}

void Pila::solicitarUltimo() {




}

Pila::~Pila() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
