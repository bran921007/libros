//============================================================================
// Name        : listaEnlazadaClase.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Lista.h";

using namespace itla;

int main() {
	Lista* listaDeCompras = new Lista();
	Nodo* arroz = new Nodo("Arroz");
	Nodo* habichuela = new Nodo("Habichuela");
	Nodo* carne = new Nodo("carne");
	listaDeCompras->agregar(arroz);
	listaDeCompras->agregar(habichuela);
	listaDeCompras->agregar(carne);

	Nodo* i = listaDeCompras->getPrimerElemento();
	while(i != NULL)
	{
		cout << i->getNombre() << endl;
		delete i;
		i = i->getSiguiente();
	}
	return 0;
}
