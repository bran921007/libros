/*
 * Nodo.h
 *
 *  Created on: 29/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
#include <cstdlib>
using namespace std;

namespace itla {

class Nodo {

private:
	int indice;
	string titulo;
	string autor;
	string editora;
	string fecha;
	string categoria;
	Nodo* anterior;

public:
	Nodo();
	virtual ~Nodo();

	string getAutor(){
		return autor;
	}

	void setAutor( string autor) {
		this->autor = autor;
	}

	 string getCategoria(){
		return categoria;
	}

	void setCategoria( string categoria) {
		this->categoria = categoria;
	}

	 string getEditora(){
		return editora;
	}

	void setEditora( string editora) {
		this->editora = editora;
	}

	 string getFecha(){
		return fecha;
	}

	void setFecha( string fecha) {
		this->fecha = fecha;
	}

	int getIndice(){
		return indice;
	}

	void setIndice(int indice) {
		this->indice = indice;
	}

	 string getTitulo(){
		return titulo;
	}

	void setTitulo( string titulo) {
		this->titulo = titulo;
	}

	Nodo* getAnterior(){
		return anterior;
	}

	void setAnterior(Nodo* anterior) {
		this->anterior = anterior;
	}
};

} /* namespace itla */

#endif /* NODO_H_ */
