/*
 * Articulo.h
 *
 *  Created on: 16/9/2014
 *      Author: Franco
 */

#ifndef ARTICULO_H_
#define ARTICULO_H_

#include "Nodo.h"


namespace itla {

class Articulo {

private:
	Nodo* primerArticulo;
	Nodo* ultimoArticulo;

public:
	Articulo();
	int menu();
	void introducirArticulo(Nodo* nodo);
	void eliminarArticulo();
	void listarArticulo();

	virtual ~Articulo();
	Nodo* getPrimerArticulo()  {
			return primerArticulo;
	}

	void setPrimerArticulo(Nodo* primerArticulo) {
		this->primerArticulo = primerArticulo;
	}

	Nodo* getUltimoArticulo() {
		return ultimoArticulo;
	}
	void setUltimoArticulo(Nodo* ultimoArticulo){
		this->ultimoArticulo = ultimoArticulo;
	}

};

} /* namespace std */

#endif /* ARTICULO_H_ */
