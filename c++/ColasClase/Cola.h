/*
 * Cola.h
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#ifndef COLA_H_
#define COLA_H_
#include "Nodo.h";

namespace itla {

class Cola {
private:
	Nodo* primerElemento;
	Nodo* ultimoElemento;

public:
	Cola();
	Nodo* getSiguiente();
	void agregar(Nodo* nodo);
	Nodo* extraer();
	virtual ~Cola();
};

} /* namespace itla */

#endif /* COLA_H_ */
