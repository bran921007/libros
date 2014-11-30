/*
 * ListaLibro.cpp
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */
#include "ListaLibro.h"
#include <iostream>;


ListaLibro::ListaLibro() {
	primerElemento = NULL;
	ultimoElemento = NULL;
}

void ListaLibro::agregar(Libro* libro) {
	if(primerElemento == NULL){
		primerElemento = libro;
		ultimoElemento = libro;
	}else{
		ultimoElemento->setSiguienteLibro(libro);
		ultimoElemento = libro;
	}
}

/*
void ListaLibro::cambiarEstado(int id) {
	Libro* libroABuscar = primerElemento;
	Libro* anteriorLibro = NULL;

	while(libroABuscar != NULL && libroABuscar->getId() != id){
		anteriorLibro = libroABuscar;
		libroABuscar = libroABuscar->getSiguienteLibro();
	}

	if(libroABuscar == NULL){
		cout << "\nNo se encontro el libro para cambiar el estado." << endl;
	}else if(libroABuscar->getEstado() == 'D' || libroABuscar->getEstado() == 'd'){
		libroABuscar->setEstado('V');
		cout << "\nEstado cambiado!." << endl;
	}else{
		libroABuscar->setEstado('D');
		cout << "\nEstado cambiado!." << endl;
	}
}
*/

void ListaLibro::modificar(int id) {
	Libro* libro= primerElemento;
	int tempOpcion = 0;
	string tempModificacion = "";
	string codigoLibro = "";
	char tempModifEstado;
	while(libro != NULL){

		if(libro->getId() == id){
			cout << "\n1. Titulo" << endl;
			cout << "2. Autor"   << endl;
			cout << "3. Codigo de libro"  << endl;
			cout << "4. Estado" << endl;
			cout << "5. Cantidad"   << endl;
			cout << "6. Precio"   << endl;
			cout << "\nIntroduzca lo que desea cambiar: ";
			cin >> tempOpcion;
			switch(tempOpcion){
				case 1:
					cout << "\nIntroduzca el nuevo título: ";
					cin >> tempModificacion;
					libro->setTitulo(tempModificacion);
					break;
				case 2:
					cout << "\nIntroduzca el nuevo autor: ";
					cin >> tempModificacion;
					libro->setAutor(tempModificacion);
					break;
				case 3:
					cout << "\nIntroduzca el nuevo codigo de libro: ";
					cin >> codigoLibro;
					libro->setCodigoLibro(codigoLibro);
					break;
				case 4:
					cout << "\nIntroduzca el nuevo estado: ";
					cin >> tempModifEstado;
					libro->setEstado(tempModifEstado);
					break;
				case 5:
					cout << "\nIntroduzca la nueva cantidad: ";
					cin >> tempOpcion;
					libro->setCantidad(tempOpcion);
					break;
				case 6:
					cout << "\nIntroduzca el nuevo precio: ";
					cin >> tempOpcion;
					libro->setPrecio(tempOpcion);
					break;

				default:
					cout << "El numero introducido es incorrecto.";
					break;
			}
		}
		libro = libro->getSiguienteLibro();
	}
}

void ListaLibro::buscar() {
}

void ListaLibro::listarLibro() {
	Libro* libro = primerElemento;
	if(libro == NULL){
		cout << "Aún no se han agregado Libros. " << endl;
	}

	while(libro != NULL){
		if(libro->getEstado() == 'D' or libro->getEstado() == 'd'){
			cout <<"\n" << libro->getId() << " - Título: " << libro->getTitulo() << "\nAutor: " << libro->getAutor() << "\nCódigo de libro: " << libro->getCodigoLibro() << "\nEstado: Disponible" << "\nCantidad: " << libro->getCantidad() <<"\nPrecio: RD$" <<libro->getPrecio() << endl;
		}else{
			cout <<"\n" << libro->getId() << " - Título: " << libro->getTitulo() << "\nAutor: " << libro->getAutor() << ",\nCódigo de libro: " << libro->getCodigoLibro() << "\nEstado: Vendido" << ",\nCantidad: " << libro->getCantidad() <<"\nPrecio: RD$" <<libro->getPrecio() << endl;
		}
		libro = libro->getSiguienteLibro();
	}
}

Libro* ListaLibro::getPrimerElemento() {
	return primerElemento;
}

Libro* ListaLibro::getUltimoElemento() {
	return ultimoElemento;
}

void ListaLibro::setPrimerElemento(Libro* primerElemento) {
	this->primerElemento = primerElemento;
}

void ListaLibro::setUltimoElemento(Libro* ultimoElemento) {
	this->ultimoElemento = ultimoElemento;
}

ListaLibro::~ListaLibro() {
	// TODO Auto-generated destructor stub
}

