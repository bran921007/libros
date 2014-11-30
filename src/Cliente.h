/*
 * Cliente.h
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#ifndef CLIENTE_H_
#define CLIENTE_H_
#include <string>
using namespace std;
class Cliente {
private:
	int id;
	string nombre;
	string apellido;
	string direccion;
	Cliente* siguienteCliente;
public:
	Cliente();

	void crearCliente(int id, string nombre, string apellido, string direccion);
	void eliminarCliente(int id);
	//void modificarCliente(int id, campo);



	virtual ~Cliente();

	int getId();
	string getNombre();
	string getApellido();
	string getDireccion();
	Cliente* getSiguienteCliente();

	void setId( int id);
	void setNombre(string nombre);
	void setApellido(string apellido);
	void setDireccion(string direccion);
	void setSiguienteCliente(Cliente* cliente);


};

#endif /* CLIENTE_H_ */
