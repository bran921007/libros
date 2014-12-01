/*
 * Lista.cpp
 *
 *  Created on: 28/9/2014
 *      Author: Franco
 */

#include "Lista.h"

namespace itla {

Lista::Lista()
{
	// TODO Auto-generated constructor stub
	Cabeza=NULL;
}

void Lista::Set_cabeza(Nodo* C) {
	Cabeza = C;
}

Nodo* Lista::Get_cabeza() {
	return Cabeza;
}

Nodo* Lista::Get_ultimo() {

	Nodo* Ultimo = Get_cabeza();
	while(Ultimo->Get_enlace()!= NULL)
	{
		Ultimo= Ultimo->Get_enlace();
	}
	return Ultimo;
}

void Lista::Agregar(Nodo* Nuevo) {

	if(Get_cabeza() == NULL)
	{
		Set_cabeza(Nuevo);
	}else{
		Get_ultimo()->Set_enlace(Nuevo);
	}
}

Nodo* Lista::Buscar(int Numero) {

	Nodo* Busqueda = Get_cabeza();
	while(Busqueda !=NULL && Busqueda->Get_indice()!=Numero)
	{
		Busqueda = Busqueda->Get_enlace();

	}
	return Busqueda;
}

void Lista::Eliminar(int Numero) {

	Nodo* Busqueda = Get_cabeza();
	Nodo* Anterior = NULL;
	if(Busqueda->Get_indice() == Numero)
	{
		Set_cabeza(Get_cabeza()->Get_enlace());
	}else{
		while(Busqueda != NULL && Busqueda->Get_indice()!= Numero)
		{
			Anterior =Busqueda;
			Busqueda=Busqueda->Get_enlace();
		}if(Busqueda !=NULL)
		{
			Anterior->Set_enlace(Busqueda->Get_enlace());
		}
	}
	delete Busqueda;
}

Lista::~Lista() {
	// TODO Auto-generated destructor stub
}

} /* namespace itla */
