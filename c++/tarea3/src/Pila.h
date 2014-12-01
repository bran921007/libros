/*
 * Pila.h
 *
 *  Created on: 29/9/2014
 *      Author: Franco
 */

#ifndef PILA_H_
#define PILA_H_
#include "Nodo.h"

namespace itla {

class Pila {

private:
	Nodo* ultimoElemento;
	Nodo* primerElemento;
public:
	Pila();

	void agregar(Nodo*);
	Nodo* obtener();
	Nodo* buscar(string);
	void solicitarUltimo();
	void eliminar(int);
	virtual ~Pila();

	Nodo* getPrimerElemento()
	{
		primerElemento = getUltimoElemento();
		while(primerElemento->getAnterior() != NULL)
		{
			primerElemento = primerElemento->getAnterior();
		}
		return primerElemento;
	}

	Nodo* getUltimoElemento(){
		return ultimoElemento;
	}

	void setUltimoElemento(Nodo* ultimoElemento) {
		this->ultimoElemento = ultimoElemento;
	}
};

} /* namespace itla */

#endif /* PILA_H_ */
