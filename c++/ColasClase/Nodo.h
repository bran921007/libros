/*
 * Nodo.h
 *
 *  Created on: 23/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
using namespace std;

namespace itla {

class Nodo {
private:
	string nombre;
	Nodo* siguiente;
public:
	Nodo(string nombre);
	virtual ~Nodo();
	Nodo* getSiguiente();
	string getNombre();
	Nodo* extraer();

	void setSiguiente(Nodo* siguiente) {
		this->siguiente = siguiente;
	}
};

} /* namespace itla */

#endif /* NODO_H_ */
