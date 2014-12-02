/*
 * GuardarEnArchivo.h
 *
 *  Created on: 2/12/2014
 *      Author: Lewdin
 */

#ifndef GUARDARENARCHIVO_H_
#define GUARDARENARCHIVO_H_

#include <iostream>
#include "Cliente.h"
#include "Libro.h"
#include "Orden.h"
#include "ListaClientes.h"
#include "ListaLibro.h"
#include "ColaOrdenes.h"
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <sstream>
#include <fstream>

namespace itla {

class GuardarEnArchivo {
private:
	char estado;
	string apellido;
	string nombre;
	string direccion;
	string titulo;
	string autor;
	string codigoLibro;
	int indiceLista;
	int cantidad;
	int precio;
	int cantidadLibros;
	Cliente* cliente;
	Libro* libro;
	bool despachado;
public:
	GuardarEnArchivo();
	void guardarClientes(ListaClientes* lista);
	void guardarLibros(ListaLibro* lista);
	void guardarOrdenes(ColaOrdenes* colaOrdenes);
	ListaClientes* cargarClientes();
	ListaLibro* cargarLibros();
	ColaOrdenes* cargarOrdenes(ListaClientes* listaCliente, ListaLibro* listaLibro);
	virtual ~GuardarEnArchivo();
};

} /* namespace itla */

#endif /* GUARDARENARCHIVO_H_ */
