/*
 * Nodo.cpp
 *
 *  Created on: 28/9/2014
 *      Author: Franco
 */

#include "Nodo.h"

namespace itla {

Nodo::Nodo() {
	// TODO Auto-generated constructor stub
	Indice = 0;
	Articulo;
	Numero=0;
	Enlace=NULL;
}

Nodo::~Nodo()
{

	// TODO Auto-generated destructor stub
}

void Nodo::Set_numero(int N) {

	Numero=N;
}

void Nodo::Set_enlace(Nodo* E) {
	Enlace=E;
}

int Nodo::Get_numero() {
	return Numero;
}

Nodo* Nodo::Get_enlace() {

	return Enlace;

}
void Nodo::Set_indice(int I) {
	Indice = I;
}

void Nodo::Set_articulo(string A) {
	Articulo = A;
}

int Nodo::Get_indice() {
	return Indice;
}

string Nodo::Get_articulo() {
	return Articulo;
}

} /* namespace itla */


