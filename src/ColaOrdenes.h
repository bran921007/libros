/*
 * ColaOrdenes.h
 *
 *  Created on: 1/12/2014
 *      Author: Lewdin
 */

#ifndef COLAORDENES_H_
#define COLAORDENES_H_

#include "Orden.h"

namespace itla {

class ColaOrdenes {
private:
	Orden* primerElemento;
	Orden* ultimoElemento;
	Orden* raizHistorial;
public:
	ColaOrdenes();
	void listarOrdenes();
	void listarOrdenesDespachadas();
	void agregarOrden(Orden* orden);
	void despacharOrdenes();
	Orden* getPrimerElemento();
	void setPrimerElemento( Orden* primerElemento);
	Orden* getUltimoElemento();
	void setUltimoElemento( Orden* ultimoElemento);
	Orden* getRaizHistorial();
	void setRaizHistorial( Orden* raizHistorial);
	virtual ~ColaOrdenes();

};

}

#endif /* COLAORDENES_H_ */
