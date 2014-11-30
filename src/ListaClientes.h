/*
 * ListaClientes.h
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#ifndef LISTACLIENTES_H_
#define LISTACLIENTES_H_

#include "Cliente.h"

class ListaClientes {
private:
	Cliente* primerElemento;
	Cliente* ultimoElemento;
public:
	ListaClientes();

	void agregar(Cliente* cliente);
	void listarClientes();
	void eliminar(int id);
	void modificar(int id);
	void buscar();
	Cliente* getPrimerElemento();
	Cliente* getUltimoElemento();
	void setPrimerElemento( Cliente* primerElemento);
	void setUltimoElemento( Cliente* ultimoElemento);
	virtual ~ListaClientes();
};

#endif /* LISTACLIENTES_H_ */
