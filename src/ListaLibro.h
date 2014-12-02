/*
 * ListaLibro.h
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#ifndef LISTALIBROS_H_
#define LISTALIBROS_H_

#include "Libro.h"

class ListaLibro {
private:
	Libro* primerElemento;
	Libro* ultimoElemento;
public:
	ListaLibro();
	void agregar(Libro* libro);
	void listarLibro();
	void listarLibroOrdenes();
	bool comprobarParaOrdenes();
//	void cambiarEstado(int id);
	void modificar(int id);
	Libro* buscarLibro(int id);
	Libro* getPrimerElemento();
	Libro* getUltimoElemento();
	void setPrimerElemento( Libro* primerElemento);
	void setUltimoElemento( Libro* ultimoElemento);
	virtual ~ListaLibro();
};

#endif /* LISTALIBROS_H_ */
