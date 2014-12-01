/*
 * Nodo.h
 *
 *  Created on: 28/9/2014
 *      Author: Franco
 */

#ifndef NODO_H_
#define NODO_H_
#include <string>
#include <cstdlib>;
using namespace std;

namespace itla {

class Nodo {

private:
	int Indice;
	string Articulo;
	int Numero;
	Nodo* Enlace;
public:
	Nodo();
	void Set_indice(int);
	void Set_articulo(string);
	void Set_numero(int);
	void Set_enlace(Nodo*);
	int Get_indice();
	string Get_articulo();
	int Get_numero();
	Nodo* Get_enlace();
	virtual ~Nodo();
};

} /* namespace itla */

#endif /* NODO_H_ */
