//============================================================================
// Name        : ShoppingSomewhere.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cliente.h"
#include "Libro.h"
#include "Orden.h"
#include "ListaClientes.h"
#include "ListaLibro.h"
#include "ColaOrdenes.h"
#include <stdio.h>
#include <ctype.h>
#include <vector>
#include <algorithm>
#include <sstream>

using namespace itla;
using namespace std;


int main() {

	int opcion = 0;
	int opcionClientes = 0;
	int tempOpcion = 0;
	int tempID = 0;
	int id = 0;
	int idLibros = 0;
	int numItem = 0;
	int cantidad = 0;
	int precio = 0;
	bool continuar = true;
	bool volverMenu = true;
	char estado;
	char tempConfirmacion;
	string nombre = "";
	string apellido = "";
	string direccion = "";
	string titulo = "";
	string autor = "";
	string codigoLibro = "";


	ListaClientes* lista = new ListaClientes();
	ListaLibro* listaLibro = new ListaLibro();
	ColaOrdenes* colaOrdenes = new ColaOrdenes();


	while(continuar){


		cout << "\n\nBienvenido a Shopping Somewhere\n" << endl;
		cout << "Menú principal:" << endl;
		cout << "1 - Clientes" << endl;
		cout << "2 - Libros" << endl;
		cout << "3 - Órdenes" << endl;
		cout << "4 - Salir\n" << endl;

		cout << "Seleccione una opcion: ";
		cin >> opcion;

		switch(opcion){
		case 1:
			volverMenu = true;
			while(volverMenu){
				cout << "\nMenu de clientes:" << endl;
				cout << "1 - Listar Clientes" << endl;
				cout << "2 - Crear Cliente" << endl;
				cout << "3 - Buscar Cliente" << endl;
				cout << "4 - Modificar Cliente" << endl;
				cout << "5 - Eliminar Cliente" << endl;
				cout << "6 - Volver al menu principal\n" << endl;

				cout << "Seleccione una opcion: ";
				cin >> opcionClientes;

				switch(opcionClientes){

					case 1:
						lista->listarClientes();
						break;

					case 2:
						{
							cout << "Creación de clientes\n" << endl;
							cout << "Nombre: ";
							cin >> nombre;

							cout << "Apellido: ";
							cin >> apellido;

							cout << "Dirección: ";
							cin >> direccion;

							Cliente* cliente = new Cliente();
							id++;
							cliente->crearCliente(id,nombre,apellido,direccion);
							lista->agregar(cliente);
						}
						break;

					/*case 3:
					{
						string nombreCliente = "";
						cout<<"Introduzca el nombre del cliente: "<<endl;
						cin>>nombreCliente;
						int contador = 0;
						string clientes[] = {};

						Cliente* busquedaCliente = lista->getPrimerElemento();

						while(busquedaCliente != NULL){
							clientes[contador] = busquedaCliente->getNombre();
							//cout << cliente[contador] << endl;
							busquedaCliente = busquedaCliente->getSiguienteCliente();
							contador++;
							//cout<<contador<<endl;

						}
						//cout<<nombreCliente<<endl;

						vector<string> myvector(clientes, clientes+(sizeof(clientes)/sizeof(clientes[0])));
						sort(myvector.begin(), myvector.end());
						if(lista->buscar(myvector, myvector.size(), nombreCliente) > -1){
								cout<<"Found "+nombreCliente<<endl;
						}
							else
							{
								cout<<"Not found "+nombreCliente<<endl;
							}


					}
						break;*/


					case 3:
						cout << "\nBuscar cliente." << endl;
						cin >> nombre;
						Cliente* tempCliente = lista->buscarClientePorNombre(nombre);
						if(tempCliente == NULL){
							cout << "\nEl cliente no se encuentra en la lista." << endl;
						}else{
							cout <<"\n" << tempCliente->getId() << " - " << tempCliente->getNombre() << " " << tempCliente->getApellido() << ", Direccion: " << tempCliente->getDireccion() << endl;
						}
						break;

					case 4:

						lista->listarClientes();
						cout << "\nIntroduzca el numero de cliente a modificar: ";
						cin >> tempOpcion;
						lista->modificar(tempOpcion);
						break;

					case 5:

						lista->listarClientes();
						cout << "\nElige el numero del cliente a eliminar: ";
						cin >> tempID;
						cout << tempID;
						cout << "\nEsta seguro de elimar el contacto (s/n): ";
						cin >> tempConfirmacion;
						if(tempConfirmacion == 's' || tempConfirmacion == 'S'){
							lista->eliminar(tempID);
						}
						break;

					case 6:
						volverMenu = false;
						break;
				}
			}
			break;

			case 2:
				volverMenu = true;
				while(volverMenu){
					cout << "\nMenu de Libros:" << endl;
					cout << "1 - Listar Libros" << endl;
					cout << "2 - Crear Libro" << endl;
					cout << "3 - Buscar Libro" << endl;
					cout << "4 - Modificar Libro" << endl;
					//cout << "5 - Cambiar Libro" << endl;
					cout << "5 - Volver al menu principal\n" << endl;

					cout << "Seleccione una opcion: ";
					cin >> opcionClientes;

					switch(opcionClientes){

						case 1:
							listaLibro->listarLibro();
							break;

						case 2:
							{
								cout << "Insercion de nuevo libro\n" << endl;
								cout << "Titulo: ";
								cin >> titulo;

								cout << "Autor: ";
								cin >> autor;

								cout << "Codigo del libro: ";
								cin >> codigoLibro;

								cout << "Cantidad: ";
								cin >> cantidad;

								cout << "Precio: ";
								cin >> precio;
								/*cout << "Dirección: ";
								cin >> estado;*/

								Libro* libro = new Libro();
								idLibros++;
								libro->crearLibro(idLibros, titulo, autor, codigoLibro, 'D', cantidad ,precio);
								listaLibro->agregar(libro);
							}
							break;

						case 4:

							listaLibro->listarLibro();
							cout << "\nIntroduzca el numero del libro a modificar: ";
							cin >> tempOpcion;
							listaLibro->modificar(tempOpcion);
							break;

						/*case 5:

							listaLibro->listarLibro();
							cout << "\nElige el numero del libro a cambiar el estado: ";
							cin >> tempID;
							cout << "\nEsta seguro cambiar el estado (s/n): ";
							cin >> tempConfirmacion;
							if(tempConfirmacion == 's' || tempConfirmacion == 'S'){
								listaLibro->cambiarEstado(tempID);
							}
							break;*/

						case 5:
							{
								//cout <<"Saliendo..." << endl;
								volverMenu = false;
							}
							break;
					}
				}
				break;

			case 3:
				volverMenu = true;
				while(volverMenu){
					cout << "\nMenu de Libros:" << endl;
					cout << "1 - Ordenes pendientes." << endl;
					cout << "2 - Crear nueva Orden." << endl;
					cout << "3 - Despachar Orden." << endl;
					cout << "4 - Historial de Ordenes." << endl;
					cout << "5 - Volver al menu principal\n" << endl;

					cout << "Seleccione una opcion: ";
					cin >> opcionClientes;

					switch(opcionClientes){
						case 1:
							if(colaOrdenes->getPrimerElemento() != NULL){
								colaOrdenes->listarOrdenes();
							}else{
								cout << "Aun no hay ordenes pendientes." << endl;
							}
							break;

						case 2:
							if(listaLibro ->comprobarParaOrdenes()){
								Cliente* tempCliente = new Cliente();
								Libro* tempLibro = new Libro();

								cout << "Crear orden\n" <<endl;
								lista->listarClientes();
								cout << "\nSeleccione el numero del cliente que desea hacer la orden: ";
								cin >> id;
								tempCliente = lista->buscarCliente(id);

								listaLibro->listarLibroOrdenes();
								cout << "\nSeleccione el numero del libro para agregar a la orden: ";
								cin >> id;
								tempLibro = listaLibro->buscarLibro(id);
								introducirCantidad:
								cout << "\nCantidad de libros: ";
								cin >> cantidad;

								if(cantidad <= tempLibro->getCantidad()){
									tempLibro->setCantidad(tempLibro->getCantidad() - cantidad);
									precio = (tempLibro->getPrecio() * cantidad);
									if(tempLibro->getCantidad() == 0){
										tempLibro->setEstado('V');
									}
									Orden* tempOrden = new Orden(tempCliente, tempLibro, precio, cantidad);
									colaOrdenes->agregarOrden(tempOrden);
									if(colaOrdenes->getRaizHistorial() == NULL){
										colaOrdenes->setRaizHistorial(tempOrden);
									}
								}else{
									cout<< "\nNo hay suficientes libros para la orden.\nIntenta nuevamente." << endl;
									goto introducirCantidad;
								}
							}else{
								cout << "\nNo hay libros para vender." << endl;
							}
							break;

						case 3:
							if(colaOrdenes->getPrimerElemento() != NULL){
								cout << "Despachando la primera orden." << endl;
								despacharNuevaOrden:
									colaOrdenes->despacharOrdenes();
								cout << "Deseas despachar la siguiente orden? (s/n)" << endl;
								cin >> tempConfirmacion;
								if(tempConfirmacion == 's' || tempConfirmacion == 'S'){
									goto despacharNuevaOrden;
								}
							}else{
								cout << "\nAun no hay ordenes a despachar." << endl;
							}
							break;

						case 4:

							if(colaOrdenes->getRaizHistorial() != NULL){
								colaOrdenes->listarOrdenesDespachadas();
							}else{
								cout << "\nAun no se han despachado ordenes." << endl;
							}
							break;

						case 5:
							volverMenu = false;
							break;
					}

				}
				break;

			case 4:

				cout <<"Saliendo..." << endl;
				continuar = false;
				break;

			default:
				cout <<"'"<< opcion <<"' no es un valor válido" << endl;
				break;
		}
	}

	return 0;
}
