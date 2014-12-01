/*
 * Articulo.cpp
 *
 *  Created on: 16/9/2014
 *      Author: Franco
 */

#include "Articulo.h"

namespace itla {

Articulo::Articulo() {
	primerArticulo = NULL;
	ultimoArticulo = NULL;

}

void Articulo::introducirArticulo(Nodo* nodo) {

		if(primerArticulo == NULL)
		{
			primerArticulo = nodo;
			ultimoArticulo = nodo;


		}else{
			ultimoArticulo->setSiguiente(nodo);
			ultimoArticulo = nodo;
		}
}

void Articulo::eliminarArticulo(int numero) {

	Nodo* busqueda = getPrimerArticulo();
	Nodo* anterior = NULL;
	if(busqueda->getIndice() == Numero)
	{
		setPrimerArticulo(getPrimerArticulo->getSiguiente());
	}else{
		while(busqueda != NULL && busqueda->getIndice()!= numero)
		{
			anterior = busqueda;
			busqueda = busqueda->getSiguiente();
		}if(busqueda != NULL)
		{
			anterior->setSiguiente(busqueda->getSiguiente());
		}
	}
		delete busqueda;
}

void Articulo::listarArticulo() {

	//Articulo lista = new Articulo();
	Nodo* i = getPrimerArticulo();
	while(i != NULL)
	{
		cout << i->getArticulo() + " " << i->getCantidad()<< endl;
		delete i;
		i = i->getSiguiente();
	}

}


int Articulo::menu() {

			int opcion = 0;
			cout << "1- Listar articulos" << endl;
			cout << "2- Introducir articulo" << endl;
			cout << "3- Eliminar articulo" << endl;
			cout << "4- salir" << endl;
			cin >> opcion;
			return opcion;
}


Articulo::~Articulo() {
	// TODO Auto-generated destructor stub
}

} /* namespace std */
