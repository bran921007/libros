/*
 * ListaClientes.cpp
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */
#include "ListaClientes.h"
#include <iostream>;

ListaClientes::ListaClientes() {
	primerElemento = NULL;
	ultimoElemento = NULL;
}

void ListaClientes::agregar(Cliente* cliente) {
	if(primerElemento == NULL){
		primerElemento = cliente;
		ultimoElemento = cliente;
	}else{
		ultimoElemento->setSiguienteCliente(cliente);
		ultimoElemento = cliente;
	}
}

void ListaClientes::eliminar() {
}

void ListaClientes::modificar() {
}

void ListaClientes::buscar() {
}

void ListaClientes::listarClientes() {
	Cliente* cliente = primerElemento;
	if(cliente == NULL){
		cout << "Aún no se han agregado clientes.\n\n " << endl;
	}

	while(cliente != NULL){

		cout <<"\n" << cliente->getNombre() << " " << cliente->getApellido() << ", Direccion: " << cliente->getDireccion() << endl;
		cliente = cliente->getSiguienteCliente();
		cout << "============================================" << endl;
	}
}

Cliente* ListaClientes::getPrimerElemento() {
	return primerElemento;
}

Cliente* ListaClientes::getUltimoElemento() {
	return ultimoElemento;
}

void ListaClientes::setPrimerElemento(Cliente* primerElemento) {
	this->primerElemento = primerElemento;
}

void ListaClientes::setUltimoElemento(Cliente* ultimoElemento) {
	this->ultimoElemento = ultimoElemento;
}

ListaClientes::~ListaClientes() {
	// TODO Auto-generated destructor stub
}

