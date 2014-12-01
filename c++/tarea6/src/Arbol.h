/*
 * Arbol.h
 *
 *  Created on: 13/10/2014
 *      Author: Franco
 */

#ifndef ARBOL_H_
#define ARBOL_H_
#include "Nodo.h"

namespace itla {

class Arbol {

private:

	Nodo* raiz;

public:
	//void agregarHijo(Nodo* nodo);
	void recorrer(Nodo* nodo);
	Arbol(Nodo* raiz);
	virtual ~Arbol();


	Nodo* getRaiz(){
		return raiz;
	}

	void setRaiz(Nodo* raiz) {
		this->raiz = raiz;
	}
};

} /* namespace itla */

#endif /* ARBOL_H_ */
