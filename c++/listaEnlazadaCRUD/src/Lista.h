/*
 * Lista.h
 *
 *  Created on: 28/9/2014
 *      Author: Franco
 */

#ifndef LISTA_H_
#define LISTA_H_
#include "Nodo.h"

namespace itla {

class Lista {

private:
	Nodo* Cabeza;

public:
	Lista();
	void Set_cabeza(Nodo*);
	Nodo* Get_cabeza();
	Nodo* Get_ultimo();
	void Agregar(Nodo*);
	Nodo* Buscar(int);
	void Eliminar(int);

	virtual ~Lista();
};

} /* namespace itla */

#endif /* LISTA_H_ */
