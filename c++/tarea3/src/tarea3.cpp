
#include <iostream>
#include "Pila.h"
using namespace itla;

int menu()
{
	int opcion=0;
	do{
		cout << "1- Listar libros" <<endl;
		cout << "2- Insertar libro" <<endl;
		cout << "3- Solicitar ultimo libro de la pila" <<endl;
		cout << "4- Buscar libro por categoria" <<endl;
		cout << "5- Salir" <<endl;
		cout << "Elija una opcion =>" << endl;
		cin >> opcion;
	}while(opcion >6 && opcion<1);
	return opcion;
}

int main() {

	Nodo* nodo = NULL;
	Nodo* temp = NULL;

	Nodo* solicitar = NULL;

	Pila* pila = new Pila();
	int opt = 0;

	int indice = 1;
	string titulo="";
	string autor ="";
	string editora ="";
	string fecha ="";
	string categoria = "";

	do{
		opt = menu();
		system("cls");
		switch(opt)
		{
		case 1:
			cout << "Listando libros" << endl;
			temp = pila->getUltimoElemento();
			cout << "#\t" << "Titulo\t" << "Autor\t" << "Editora\t" << "Fecha\t" << "Categoria\t"<<endl;
				while(temp != NULL)
				{

					cout << temp->getIndice() << "-\t" <<temp->getTitulo() << "\t" << temp->getAutor() <<
					"\t"<< temp->getEditora() << "\t" << temp->getFecha() << "\t" << temp->getCategoria()
					<<endl;
					temp = temp->getAnterior();
				}

		break;
		case 2:
			nodo = new Nodo();
			indice = indice + nodo->getIndice();
			cout << "Insertar libro  " <<endl;
			cout << "Ingrese el titulo: " << endl;
			cin >> titulo;
			cout << "Ingrese autor: " << endl;
			cin >> autor;
			cout << "Ingrese editora " << endl;
			cin >> editora;
			cout << "Ingrese fecha " <<endl;
			cin >> fecha;
			cout << "Ingrese categoria " <<endl;
			cin >> categoria;

			nodo->setIndice(indice);
			nodo->setTitulo(titulo);
			nodo->setAutor(autor);
			nodo->setEditora(editora);
			nodo->setFecha(fecha);
			nodo->setCategoria(categoria);

			pila->agregar(nodo);
			indice++;

		break;

		case 3:
			cout << "solicitar el ultimo libro de la pila" <<endl;

			temp = pila->obtener();
			if(temp != NULL)
			{
				cout << "Has solicitado el libro: " << temp->getTitulo() << "Del autor: "<< temp->getAutor() << endl;

				delete temp;
				temp = temp->getAnterior();
				//temp = pila->obtener();
			}else
			{
				cout << "No hay ningun libro para sacar" << endl;
			}


		break;

		case 4:
			cout << "Buscar libro por categoria" << endl;
			cout << "Ingrese la categoria que desea buscar "<<endl;

			cin >>categoria;
			temp = pila->buscar(categoria);
			while(temp != NULL && temp == pila->buscar(categoria)){
				temp = pila->obtener();

				if(temp == pila->buscar(categoria)){
				delete temp;

				}
				temp = temp->getAnterior();

			}

			cout << "Libro sacado" << endl;

		break;

		case 5:

			cout << "Saliendo del sistema" << endl;
			system("pause>null");
			system("cls");

		break;
		}

		system("pause>null");
		system("cls");


	}while(opt != 6);


	return 0;
}
