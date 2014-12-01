/*
 * Cliente.cpp
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#include "Cliente.h"




Cliente::Cliente() {
	// TODO Auto-generated constructor stub

}

int Cliente::getId(){
	return id;
}

string Cliente::getApellido()  {
	return apellido;
}

string Cliente::getDireccion()  {
	return direccion;
}

string Cliente::getNombre()  {
	return nombre;
}

Cliente* Cliente::getSiguienteCliente() {
	return siguienteCliente;
}

void Cliente::setSiguienteCliente(Cliente* cliente) {
	this->siguienteCliente = cliente;
}

void Cliente::setApellido( string apellido) {
	this->apellido = apellido;
}

void Cliente::crearCliente(int id, string nombre, string apellido,string direccion) {
	this->id = id;
	this->nombre = nombre;
	this->apellido = apellido;
	this->direccion = direccion;
	siguienteCliente = NULL;

}

void Cliente::setDireccion( string direccion) {
	this->direccion = direccion;
}

void Cliente::setNombre( string nombre) {
	this->nombre = nombre;
}


Cliente::~Cliente() {
	// TODO Auto-generated destructor stub
}


