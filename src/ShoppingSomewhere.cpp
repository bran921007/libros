//============================================================================
// Name        : ShoppingSomewhere.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cliente.h"
#include "ListaClientes.h"
#include <stdio.h>
#include <ctype.h>
using namespace std;


int main() {

	int opcion = 0;
	int id = 0;
	bool continuar = true;
	bool volverMenu = true;
	string nombre = "";
	string apellido = "";
	string direccion = "";
	ListaClientes* lista = new ListaClientes();


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
				cout << "1 - Listar Clientes" << endl;
				cout << "2 - Crear Cliente" << endl;
				cout << "3 - Buscar Cliente" << endl;
				cout << "4 - Modificar Cliente" << endl;
				cout << "5 - Eliminar Cliente" << endl;
				cout << "6 - Volver al menu principal\n" << endl;

				cout << "Seleccione una opcion: ";
				cin >> opcion;

				switch(opcion){

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
							cliente->crearCliente(id,nombre,apellido,direccion);
							lista->agregar(cliente);
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

			case 4:
				cout <<"Saliendo..." << endl;
				continuar = false;
			break;
			default:
				cout <<"'"<< opcion <<"' no es un valor válido" << endl;
		}
	}

	return 0;
}
