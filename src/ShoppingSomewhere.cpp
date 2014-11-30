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
#include "ListaClientes.h"
#include "ListaLibro.h"
#include <stdio.h>
#include <ctype.h>
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
	bool continuar = true;
	bool volverMenu = true;
	char estado;
	string nombre = "";
	string apellido = "";
	string direccion = "";
	string titulo = "";
	string autor = "";
	string codigoLibro = "";


	char tempConfirmacion;
	ListaClientes* lista = new ListaClientes();
	ListaLibro* listaLibro = new ListaLibro();


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
						{
							cout <<"Saliendo..." << endl;
							volverMenu = false;
						}
						break;
				}
			}
			break;

			case 2:
				while(volverMenu){
					cout << "\nMenu de Libros:" << endl;
					cout << "1 - Listar Libros" << endl;
					cout << "2 - Crear Libro" << endl;
					cout << "3 - Buscar Libro" << endl;
					cout << "4 - Modificar Libro" << endl;
					//cout << "5 - Cambiar Libro" << endl;
					cout << "6 - Volver al menu principal\n" << endl;

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

								/*cout << "Dirección: ";
								cin >> estado;*/

								Libro* libro = new Libro();
								idLibros++;
								libro->crearLibro(idLibros, titulo, autor, codigoLibro, 'D', cantidad );
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

						case 6:
							{
								cout <<"Saliendo..." << endl;
								volverMenu = false;
							}
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
