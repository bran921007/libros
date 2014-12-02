/*
 * ListaClientes.cpp
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */
#include "ListaClientes.h"
#include <iostream>;
#include <vector>

ListaClientes::ListaClientes() {
	primerElemento = NULL;
	ultimoElemento = NULL;
}

void ListaClientes::agregar(Cliente* cliente) {
	if(primerElemento == NULL){
		primerElemento = cliente;
		ultimoElemento = cliente;
	}else{
		ultimoElemento->setSiguienteCliente(cliente);
		ultimoElemento = cliente;
	}
}

void ListaClientes::eliminar(int id) {
	Cliente* clienteABuscar = primerElemento;
	Cliente* anteriorCliente = NULL;

	while(clienteABuscar != NULL && clienteABuscar->getId() != id){
		anteriorCliente = clienteABuscar;
		clienteABuscar = clienteABuscar->getSiguienteCliente();
	}

	if(clienteABuscar == NULL){
		cout << "\nNo se encontro el cliente a eliminar." << endl;
	}else if(anteriorCliente == NULL){
		primerElemento = primerElemento->getSiguienteCliente();
		delete clienteABuscar;
		cout << "\nCliente eliminado!." << endl;
	}else if(clienteABuscar->getSiguienteCliente() == NULL){
		ultimoElemento = anteriorCliente;
		anteriorCliente->setSiguienteCliente(clienteABuscar->getSiguienteCliente());
		delete clienteABuscar;
		cout << "\nCliente eliminado!." << endl;
	}else{
		anteriorCliente->setSiguienteCliente(clienteABuscar->getSiguienteCliente());
		delete clienteABuscar;
		cout << "\nCliente eliminado!." << endl;
	}
}

void ListaClientes::modificar(int id) {
	Cliente* cliente = primerElemento;
	int tempOpcion = 0;
	string tempModificacion = "";
	while(cliente != NULL){

		if(cliente->getId() == id){
			cout << "\n1. Nombre" << endl;
			cout << "2. Apellido"   << endl;
			cout << "3. Direccion"  << endl;
			cout << "\nIntroduzca lo que desea eliminar: ";
			cin >> tempOpcion;
			switch(tempOpcion){
				case 1:
					cout << "\nIntroduzca el nuevo nombre: ";
					cin >> tempModificacion;
					cliente->setNombre(tempModificacion);
					break;
				case 2:
					cout << "\nIntroduzca el nuevo apellido: ";
					cin >> tempModificacion;
					cliente->setApellido(tempModificacion);
					break;
				case 3:
					cout << "\nIntroduzca la nueva direccion: ";
					cin >> tempModificacion;
					cliente->setDireccion(tempModificacion);
					break;
				default:
					cout << "El numero introducido es incorrecto.";
					break;
			}
		}
		cliente = cliente->getSiguienteCliente();
	}
}

Cliente* ListaClientes::buscarCliente(int id) {
	Cliente* buscar = getUltimoElemento();
	while((buscar != NULL)and(buscar->getId() != id))
	{
		buscar = buscar->getSiguienteCliente();
	}
	return buscar;

//	  int Iarriba = tamano-1;
//	  int Iabajo = 0;
//	  int Icentro=0;
//	  cout<<"hahhahahaha"<<endl;
//	  while (Iabajo <= Iarriba)
//	    {
//	      Icentro = (Iarriba + Iabajo)/2;
//	      if (miVector.at(Icentro) == clave)
//	    	  	return 1;
//	      else{
//			 if (clave.compare(miVector.at(Icentro)) > 0)
//			   Iarriba=Icentro-1;
//			 else{
//			   Iabajo=Icentro+1;
//			 }
//	      }
//	    }
//	return -1;
}

void ListaClientes::listarClientes() {
	Cliente* cliente = primerElemento;
	if(cliente == NULL){
		cout << "Aún no se han agregado clientes.\n " << endl;
	}

	while(cliente != NULL){

		cout <<"\n" << cliente->getId() << " - " << cliente->getNombre() << " " << cliente->getApellido() << ", Direccion: " << cliente->getDireccion() << endl;
		cliente = cliente->getSiguienteCliente();
		//cout << "============================================" << endl;
	}
}

Cliente* ListaClientes::getPrimerElemento() {
	return primerElemento;
}

Cliente* ListaClientes::getUltimoElemento() {
	return ultimoElemento;
}

void ListaClientes::setPrimerElemento(Cliente* primerElemento) {
	this->primerElemento = primerElemento;
}

void ListaClientes::setUltimoElemento(Cliente* ultimoElemento) {
	this->ultimoElemento = ultimoElemento;
}

ListaClientes::~ListaClientes() {
	// TODO Auto-generated destructor stub
}

