
/*
#include <iostream>
#include <cstdlib>
*/
#include "Articulo.h";
using namespace itla;

int main() {
		Articulo* lista = new Articulo();
		Nodo* nodo = new Nodo();

		int opt;

		string articulo;
		int cantidad;

		do
		{
			opt = lista->menu();

			switch(opt){

			case 1:

				cout << "Mostrando Lista" << endl;
				lista->listarArticulo();

			break;

			case 2:
				//char input[100];
				cout << "Introduce el articulo " << endl;
				//getline(cin, articulo);
				cin >> articulo;
				cout << "Introduce la cantidad " << endl;
				cin >> cantidad;
									//Nodo*
									//cout << articulo << endl;

				nodo->setArticulo(articulo);
				nodo->setCantidad(cantidad);

				lista->introducirArticulo(nodo);
				//opt = lista->menu();
			break;

			case 3:


			break;

			}

			cout<<endl<<endl;
			system("pause");
			system("cls");

		}while(opt!=4);


		//system("pause");

		/*Nodo* arroz = new Nodo("Arroz");
		Nodo* habichuela = new Nodo("Habichuela");
		Nodo* carne = new Nodo("carne");
		listaDeCompras->introducirArticulo(arroz);
		listaDeCompras->introducirArticulo(habichuela);
		listaDeCompras->introducirArticulo(carne);

		Nodo* i = listaDeCompras->getPrimerArticulo();
		while(i != NULL)
		{
			cout << i->getArticulo() << endl;
			delete i;
			i = i->getSiguiente();
		}*/
		return 0;
}
