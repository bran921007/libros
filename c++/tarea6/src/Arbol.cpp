/*
 * Arbol.cpp
 *
 *  Created on: 13/10/2014
 *      Author: Franco
 */

#include "Arbol.h"

namespace itla {

Arbol::Arbol(Nodo* raiz) {
	//primerHijo = NULL;
	//ultimoHijo = NULL;
	this->raiz = raiz;

}

/*void Arbol::agregarHijo(Nodo* nodo) {


}*/

void Arbol::recorrer(Nodo* nodo) {

	cout << nodo->getNombre() <<endl;
	if(nodo->getHijos() >0)
	{
		Nodo* i = nodo->getPrimerHijo();
		while(i != NULL)
		{
			recorrer(i);
			i = i->getSiguiente();
		}
	}
}

Arbol::~Arbol() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
