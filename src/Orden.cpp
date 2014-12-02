/*
 * Orden.cpp
 *
 *  Created on: 1/12/2014
 *      Author: Lewdin
 */

#include "Orden.h"

namespace itla {

Orden::Orden(Cliente* cliente, Libro* libro, int precio, int cantidad) {
	this->cliente = cliente;
	this->libro = libro;
	this->precio = precio;
	this->cantidadLibros = cantidad;
	despachado = false;
	siguienteOrden = NULL;
}

Cliente* Orden::getCliente()  {
	return cliente;
}

void Orden::setCliente( Cliente* cliente) {
	this->cliente = cliente;
}

Libro* Orden::getLibro()  {
	return libro;
}

void Orden::setLibro( Libro* libro) {
	this->libro = libro;
}

int Orden::getPrecio()  {
	return precio;
}

void Orden::setPrecio(int precio) {
	this->precio = precio;
}


int Orden::getCantidadLibros()  {
	return cantidadLibros;
}

void Orden::setCantidadLibros(int cantidadLibros) {
	this->cantidadLibros = cantidadLibros;
}

bool Orden::getDespachado()  {
	return despachado;
}

void Orden::setDespachado(bool despachado) {
	this->despachado = despachado;
}

Orden* Orden::getSiguienteOrden()  {
	return siguienteOrden;
}

void Orden::setSiguienteOrden( Orden* siguienteOrden) {
	this->siguienteOrden = siguienteOrden;
}

Orden::~Orden() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
