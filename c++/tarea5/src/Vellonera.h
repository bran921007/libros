
#ifndef VELLONERA_H_
#define VELLONERA_H_
#include "Nodo.h"

namespace itla {

class Vellonera {

private:
	Nodo* primerElemento;
	Nodo* ultimoElemento;
	//pendientes por borrar:
	Nodo* nodo1;
	Nodo* nodo2;
	Nodo* nodo3;

public:
	Vellonera();
	void agregar(Nodo* elemento);
	void listar();
	void cancionActual();
	void proximaCancion();
	void cancionAnterior();
	void repetirLista();
	void eliminar(int indice);
	int menu();
	void agregado();
	Nodo* buscar(int indice);
	Nodo* obtener();
	virtual ~Vellonera();

	Nodo* getPrimerElemento(){
		return primerElemento;
	}

	void setPrimerElemento(Nodo* primerElemento) {
		this->primerElemento = primerElemento;
	}

	Nodo* getUltimoElemento(){
		return ultimoElemento;
	}

	void setUltimoElemento(Nodo* ultimoElemento) {
		this->ultimoElemento = ultimoElemento;
	}

	//Pendiente a borrar

	 Nodo* getNodo1()  {
		return nodo1;
	}

	void setNodo1( Nodo* nodo1) {
		this->nodo1 = nodo1;
	}

	 Nodo* getNodo2()  {
		return nodo2;
	}

	void setNodo2(Nodo* nodo2) {
		this->nodo2 = nodo2;
	}

	 Nodo* getNodo3()  {
		return nodo3;
	}

	void setNodo3(Nodo* nodo3) {
		this->nodo3 = nodo3;
	}
};

} /* namespace itla */

#endif /* VELLONERA_H_ */
