/*
 * Lista.h
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Nodo.h";
namespace itla {

class Lista {

private:
	Nodo* primerElemento;
	Nodo* ultimoElemento;

public:
	void agregar(Nodo* nodo);

	Lista();
	virtual ~Lista();

	Nodo* getPrimerElemento()  {
		return primerElemento;
	}

	void setPrimerElemento(Nodo* primerElemento) {
		this->primerElemento = primerElemento;
	}

	Nodo* getUltimoElemento() {
		return ultimoElemento;
	}
};

} /* namespace std */

#endif /* LISTA_H_ */
