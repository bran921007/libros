
#include "Arbol.h"
using namespace itla;

int menu()
{
	int opcion=0;
	do{
		cout << "1- Crear arbol genealogico" <<endl;
		cout << "2- Desplegar arbol genealogico" <<endl;
		cout << "3- Salir" <<endl;
		cout << "Elija una opcion =>" << endl;
		cin >> opcion;
	}while(opcion >4 && opcion<1);
	return opcion;
}

int main() {

	Nodo* aux = NULL;
	Nodo* i = NULL;

	Arbol* arbol = new Arbol(aux);


	string nombre;
	int hijos;
	int indice = 1;
	string hijo;

	aux = new Nodo();
	cout << "Ingrese el nombre de la persona: ";
	cin >> nombre;
	aux->setNombre(nombre);
	cout << "Digite la cantidad de hijos de "<< nombre << ": ";
	cin >>hijos;
	aux->setHijos(hijos);


	i = i->getPrimerHijo();
	if(i !=NULL )
	{
		cout <<"Esto es distinto de NULL";
		while(i !=NULL){

			cout << "Ingrese el hijo #"<< indice <<": "<<endl;
			cin>>hijo;
			i->setNombre(hijo);
			aux->agregarHijo(i);
			i = i->getSiguiente();
			indice++;
			//temp= temp->getPrimerHijo();

		}
/*		while(temp != NULL)
		{
			cout << "Ingrese el hijo de ";
		}*/

	//aux->agregarHijo(i);
	}

	arbol->recorrer(aux);

	/*Nodo* a = NULL;
	Nodo* b = NULL;
	Nodo* c = NULL;
	Nodo* d = NULL;
	Nodo* e = NULL;
	Nodo* f = NULL;

	a = new Nodo();
	a->setNombre("a");
	a->setHijos(3);

	b = new Nodo();
	b->setNombre("b");
	b->setHijos(2);

	c = new Nodo();
	c->setNombre("c");
	c->setHijos(0);

	d = new Nodo();
	d->setNombre("d");
	d->setHijos(0);

	e = new Nodo();
	e->setNombre("e");
	e->setHijos(0);

	f = new Nodo();
	f->setNombre("f");
	f->setHijos(0);

	a->agregarHijo(b);
	a->agregarHijo(c);
	a->agregarHijo(d);
	b->agregarHijo(e);
	b->agregarHijo(f);*/

	/*Arbol* arbol = new Arbol(a);
	arbol->recorrer(a);*/


	return 0;
}
