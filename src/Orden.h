/*
 * Orden.h
 *
 *  Created on: 1/12/2014
 *      Author: Lewdin
 */

#ifndef ORDEN_H_
#define ORDEN_H_

#include "Libro.h"
#include "Cliente.h"

namespace itla {

class Orden {
private:
	Cliente* cliente;
	Libro* libro;
	int precio;
	int cantidadLibros;
	bool despachado;
	Orden* siguienteOrden;
public:
	Orden(Cliente* cliente, Libro* libro, int precio, int cantidad);
	Cliente* getCliente();
	void setCliente( Cliente* cliente);
	Libro* getLibro();
	void setLibro( Libro* libro);
	int getPrecio();
	void setPrecio(int precio);
	int getCantidadLibros();
	void setCantidadLibros(int cantidadLibros);
	bool getDespachado();
	void setDespachado(bool despachado);
	Orden* getSiguienteOrden();
	void setSiguienteOrden( Orden* siguienteOrden);
	virtual ~Orden();

};

}

#endif /* ORDEN_H_ */
