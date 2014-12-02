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
					cout << "\nIntroduzca el nuevo t�tulo: ";
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
					if(tempOpcion == 0){
						libro->setEstado('V');
					}else{
						libro->setEstado('D');
					}
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

Libro* ListaLibro::buscarLibro(int id) {
	Libro* buscar = getPrimerElemento();
	while((buscar != NULL) && (buscar->getId() != id))
	{
		buscar = buscar->getSiguienteLibro();
	}
	return buscar;
}

int ListaLibro::obtenerUltimoIdLibro() {
	int contador = 0;
	Libro* buscar = getPrimerElemento();
	while((buscar != NULL))
	{
		contador++;
		buscar = buscar->getSiguienteLibro();
	}
	return contador;
}

int ListaLibro::buscarLibroPorTitulo(string titulo) {
	Libro* tempLibro = primerElemento;
	int contador = 0;
	while(tempLibro != NULL){
		if(tempLibro->getTitulo() == titulo){
			if(contador == 0){
				cout << "Lista de libros encontrados con el nombre: " << titulo << endl;
			}
			cout <<"\n" << tempLibro->getId() << " - T�tulo: " << tempLibro->getTitulo() << "\nAutor: " << tempLibro->getAutor() << "\nC�digo de libro: " << tempLibro->getCodigoLibro() << "\nEstado: Disponible" << "\nCantidad: " << tempLibro->getCantidad() <<"\nPrecio: RD$" <<tempLibro->getPrecio() << endl;
			contador++;
		}
		tempLibro = tempLibro->getSiguienteLibro();
	}
	return contador;
}

void ListaLibro::listarLibro() {
	Libro* libro = primerElemento;
	if(libro == NULL){
		cout << "A�n no se han agregado Libros. " << endl;
	}

	while(libro != NULL){
		if(libro->getEstado() == 'D' or libro->getEstado() == 'd'){
			cout <<"\n" << libro->getId() << " - T�tulo: " << libro->getTitulo() << "\nAutor: " << libro->getAutor() << "\nC�digo de libro: " << libro->getCodigoLibro() << "\nEstado: Disponible" << "\nCantidad: " << libro->getCantidad() <<"\nPrecio: RD$" <<libro->getPrecio() << endl;
		}else{
			cout <<"\n" << libro->getId() << " - T�tulo: " << libro->getTitulo() << "\nAutor: " << libro->getAutor() << ",\nC�digo de libro: " << libro->getCodigoLibro() << "\nEstado: Vendido" << ",\nCantidad: " << libro->getCantidad() <<"\nPrecio: RD$" <<libro->getPrecio() << endl;
		}
		libro = libro->getSiguienteLibro();
	}
}

void ListaLibro::listarLibroOrdenes() {
	Libro* libro = primerElemento;
	if(libro == NULL){
		cout << "A�n no se han agregado Libros. " << endl;
	}

	while(libro != NULL){
		if(libro->getEstado() == 'D' or libro->getEstado() == 'd'){
			cout <<"\n" << libro->getId() << " - T�tulo: " << libro->getTitulo() << "\nAutor: " << libro->getAutor() << "\nC�digo de libro: " << libro->getCodigoLibro() << "\nEstado: Disponible" << "\nCantidad: " << libro->getCantidad() <<"\nPrecio: RD$" <<libro->getPrecio() << endl;
		}
		libro = libro->getSiguienteLibro();
	}
}

bool ListaLibro::comprobarParaOrdenes() {
	Libro* libro = primerElemento;
	if(libro == NULL){
		cout << "A�n no se han agregado Libros. " << endl;
	}

	while(libro != NULL){
		if(libro->getEstado() == 'D' or libro->getEstado() == 'd'){
			return true;
		}
		libro = libro->getSiguienteLibro();
	}
	return false;
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

