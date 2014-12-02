/*
 * GuardarEnArchivo.cpp
 *
 *  Created on: 2/12/2014
 *      Author: Lewdin
 */

#include "GuardarEnArchivo.h"

namespace itla {

GuardarEnArchivo::GuardarEnArchivo() {

}

void GuardarEnArchivo::guardarClientes(ListaClientes* lista) {
	ofstream salida;
	Cliente* cliente = lista->getPrimerElemento();
	//Nuevo codigo para agregar los datos al archivo.
	salida.open("clientes.txt", ios::out);
	while(cliente != NULL){
		salida << cliente->getId() << " " << cliente->getNombre() << " " << cliente->getApellido() << " " <<cliente->getDireccion() << endl;
		cliente = cliente->getSiguienteCliente();
	}
	salida.close();
}

void GuardarEnArchivo::guardarLibros(ListaLibro* lista) {
	ofstream salida;
	Libro* libro = lista->getPrimerElemento();
	//Nuevo codigo para agregar los datos al archivo.
	salida.open("libros.txt", ios::out);
	while(libro != NULL){
		salida << libro->getId() << " " << libro->getTitulo() << " " << libro->getAutor() << " " <<libro->getCodigoLibro() << " " <<libro->getEstado() << " " <<libro->getCantidad() << " " <<libro->getPrecio() <<  endl;
		libro = libro->getSiguienteLibro();
	}
	salida.close();
}

void GuardarEnArchivo::guardarOrdenes(ColaOrdenes* colaOrdenes) {
	ofstream salida;
	Orden* orden = colaOrdenes->getRaizHistorial();
	//Nuevo codigo para agregar los datos al archivo.
	salida.open("ordenes.txt", ios::out);
	while(orden != NULL){
		salida << orden->getCliente()->getId() << " " << orden->getLibro()->getId() << " " << orden->getPrecio() << " " << orden->getCantidadLibros() <<  " " << orden->getDespachado() << endl;
		orden = orden->getSiguienteOrden();
	}
	salida.close();
}

ListaClientes* GuardarEnArchivo::cargarClientes() {
	ifstream entrada;
	ListaClientes* lista = new ListaClientes();
		//Nuevo codigo para extraer los datos del archivo.
	entrada.open("clientes.txt", ios::in);
	if(entrada.fail()){
		cout<<"Fallo al abrir el archivo para cargar los clientes."<<endl;
	}else{

		entrada >> indiceLista;
		while(!entrada.eof()){
			entrada >> nombre >> apellido >> direccion;
			Cliente* cliente = new Cliente();
			cliente->crearCliente(indiceLista, nombre, apellido,direccion);
			lista->agregar(cliente);
			entrada >> indiceLista;
		}

	}
	//
	return lista;
}

ListaLibro* GuardarEnArchivo::cargarLibros() {
	ifstream entrada;
	ListaLibro* lista = new ListaLibro();
	//Nuevo codigo para extraer los datos del archivo.
	entrada.open("libros.txt", ios::in);
	if(entrada.fail()){
		cout<<"Fallo al abrir el archivo para cargar los libros."<<endl;
	}else{

		entrada >> indiceLista;
		while(!entrada.eof()){
			entrada >> titulo >> autor >> codigoLibro >> estado >> cantidad >> precio;
			Libro* libro = new Libro();
			libro->crearLibro(indiceLista, titulo, autor, codigoLibro, estado, cantidad ,precio);
			lista->agregar(libro);
			entrada >> indiceLista;
		}
	}
	//
	return lista;
}

ColaOrdenes* GuardarEnArchivo::cargarOrdenes(ListaClientes* listaCliente, ListaLibro* listaLibro) {
	ifstream entrada;
	Cliente* cliente;
	Libro* libro;
	int precio;
	int idCliente;
	int idLibro;
	int cantidadLibros;
	bool despachado;
	ColaOrdenes* colaOrdenes = new ColaOrdenes();
	//Nuevo codigo para extraer los datos del archivo.
	entrada.open("ordenes.txt", ios::in);
	if(entrada.fail()){
		cout<<"Fallo al abrir el archivo para cargar las ordenes."<<endl;
	}else{
		entrada >> idCliente;
		while(!entrada.eof()){
			entrada >> idLibro >> precio >> cantidadLibros >> despachado;
			cliente = listaCliente->buscarCliente(idCliente);
			libro = listaLibro->buscarLibro(idLibro);
			Orden* orden = new Orden(cliente, libro, precio, cantidadLibros);
			if(despachado == 1){
				orden->setDespachado(true);
			}else{
				orden->setDespachado(false);
			}
			colaOrdenes->agregarOrden(orden);
			if(colaOrdenes->getRaizHistorial() == NULL){
				colaOrdenes->setRaizHistorial(orden);
			}
			entrada >> idCliente;
		}
	}
	//
	return colaOrdenes;
}

GuardarEnArchivo::~GuardarEnArchivo() {}

} /* namespace itla */
