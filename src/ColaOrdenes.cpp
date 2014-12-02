/*
 * ColaOrdenes.cpp
 *
 *  Created on: 1/12/2014
 *      Author: Lewdin
 */

#include "ColaOrdenes.h"
#include <iostream>

namespace itla {

ColaOrdenes::ColaOrdenes() {
	primerElemento = NULL;
	ultimoElemento = NULL;
	raizHistorial = NULL;
}

void ColaOrdenes::listarOrdenes() {
	Orden* tempOrdenes = primerElemento;
	cout << "\nLista de ordenes pendientes: " << endl;
	while(tempOrdenes != NULL){
		if(!tempOrdenes->getDespachado()){
			cout << "\nEl libro: " << tempOrdenes->getLibro()->getTitulo() << endl;
			cout << "Autor: " << tempOrdenes->getLibro()->getAutor() << endl;
			cout << "Vendido a: " << tempOrdenes->getCliente()->getNombre() << " " << tempOrdenes->getCliente()->getApellido() << endl;
			cout << "Direccion: " << tempOrdenes->getCliente()->getDireccion() << endl;
			cout << "Precio: " << tempOrdenes->getPrecio() << endl;
			cout << "Cantidad comprada: " << tempOrdenes->getCantidadLibros() << endl;
			tempOrdenes = tempOrdenes->getSiguienteOrden();
		}
	}
}

void ColaOrdenes::listarOrdenesDespachadas() {
	Orden* tempOrdenes = raizHistorial;
	cout << "\nHistorial de las compras realizadas: " << endl;
	while(tempOrdenes != NULL){
		if(tempOrdenes->getDespachado()){
			cout << "\nEl libro: " << tempOrdenes->getLibro()->getTitulo() << endl;
			cout << "Autor: " << tempOrdenes->getLibro()->getAutor() << endl;
			cout << "Vendido a: " << tempOrdenes->getCliente()->getNombre() << " " << tempOrdenes->getCliente()->getApellido() << endl;
			cout << "Direccion: " << tempOrdenes->getCliente()->getDireccion() << endl;
			cout << "Precio: " << tempOrdenes->getPrecio() << endl;
			cout << "Cantidad comprada: " << tempOrdenes->getCantidadLibros() << endl;
			tempOrdenes = tempOrdenes->getSiguienteOrden();
		}else{
			tempOrdenes = tempOrdenes->getSiguienteOrden();
		}
	}
}

void ColaOrdenes::agregarOrden(Orden* orden) {
	if(primerElemento == NULL){
		primerElemento = orden;
		ultimoElemento = orden;
		raizHistorial = orden;
	}else{
		ultimoElemento->setSiguienteOrden(orden);
		ultimoElemento = orden;
	}
}

void ColaOrdenes::despacharOrdenes() {
	Orden* tempOrdenes = primerElemento;
	if(primerElemento == NULL)
	{
		cout << "No hay ordenes a despachar";
	}else{
		cout << "\nOrden despachada:" << endl;
		cout << "\nEl libro: " << tempOrdenes->getLibro()->getTitulo() << endl;
		cout << "Autor: " << tempOrdenes->getLibro()->getAutor() << endl;
		cout << "Vendido a: " << tempOrdenes->getCliente()->getNombre() << " " << tempOrdenes->getCliente()->getApellido() << endl;
		cout << "Direccion: " << tempOrdenes->getCliente()->getDireccion() << endl;
		cout << "Precio: " << tempOrdenes->getPrecio() << endl;
		cout << "Cantidad comprada: " << tempOrdenes->getCantidadLibros() << endl;
//Nueva linea
		primerElemento->setDespachado(true);
		if(primerElemento->getSiguienteOrden() != NULL){
			primerElemento = primerElemento -> getSiguienteOrden();
		}else{
			primerElemento = NULL;
		}
	}
}

Orden* ColaOrdenes::getPrimerElemento()  {
	return primerElemento;
}

void ColaOrdenes::setPrimerElemento( Orden* primerElemento) {
	this->primerElemento = primerElemento;
}

Orden* ColaOrdenes::getUltimoElemento()  {
	return ultimoElemento;
}

void ColaOrdenes::setUltimoElemento( Orden* ultimoElemento) {
	this->ultimoElemento = ultimoElemento;
}

Orden* ColaOrdenes::getRaizHistorial()  {
	return raizHistorial;
}

void ColaOrdenes::setRaizHistorial( Orden* raizHistorial) {
	this->raizHistorial = raizHistorial;
}



ColaOrdenes::~ColaOrdenes() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
