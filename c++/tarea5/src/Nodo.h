
#ifndef NODO_H_
#define NODO_H_
#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

namespace itla {

class Nodo {

private:
	int indice;
	string titulo;
	string artista;
	double duracion;

	Nodo* anterior;
	Nodo* siguiente;


public:
	Nodo();
	virtual ~Nodo();

	Nodo* getAnterior(){
		return anterior;
	}

	void setAnterior(Nodo* anterior) {
		this->anterior = anterior;
	}

	string getArtista(){
		return artista;
	}

	void setArtista(string artista) {
		this->artista = artista;
	}

	double getDuracion(){
		return duracion;
	}

	void setDuracion(double duracion) {
		this->duracion = duracion;
	}

	Nodo* getSiguiente(){
		return siguiente;
	}

	void setSiguiente(Nodo* siguiente) {
		this->siguiente = siguiente;
	}

	string getTitulo(){
		return titulo;
	}

	void setTitulo(string titulo) {
		this->titulo = titulo;
	}

	int getIndice(){
		return indice;
	}

	void setIndice(int indice) {
		this->indice = indice;
	}
};

} /* namespace itla */

#endif /* NODO_H_ */
