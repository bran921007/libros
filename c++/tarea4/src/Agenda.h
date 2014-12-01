/*
 * Agenda.h
 *
 *  Created on: 30/9/2014
 *      Author: Franco
 */

#ifndef AGENDA_H_
#define AGENDA_H_
#include "Nodo.h"

namespace itla {

class Agenda {

private:
	int indice;
	int auxIndice;
	char nombre[30];
	int telefono;
	bool encontrado;
	char auxGrupo[10];

public:
	Agenda();
	virtual ~Agenda();
	void agregar();
	void lista();
	void leer();
	void actualizar();
	void borrar();
	void saltoLinea(ifstream& stream, int nLines);

	char* getAuxGrupo(){
		return auxGrupo;
	}

	bool isEncontrado(){
		return encontrado;
	}

	void setEncontrado(bool encontrado) {
		this->encontrado = encontrado;
	}

	int getIndice(){
		return indice;
	}

	void setIndice(int indice) {
		this->indice = indice;
	}

	char* getNombre(){
		return nombre;
	}

	int getTelefono(){
		return telefono;
	}

	void setTelefono(int telefono) {
		this->telefono = telefono;
	}

	int getAuxIndice(){
		return auxIndice;
	}

	void setAuxIndice(int auxIndice) {
		this->auxIndice = auxIndice;
	}
};

} /* namespace itla */

#endif /* AGENDA_H_ */
