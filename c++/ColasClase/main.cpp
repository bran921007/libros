
#include <iostream>
#include "Cola.h";
using namespace itla;


int main()
{
	Cola* cola = new Cola();
	cola->agregar(new Nodo("Danny"));
	cola->agregar(new Nodo("Abraham"));
	cola->agregar(new Nodo("Jean Luis"));
	Nodo* i = cola->extraer();
	while(i != NULL)
	{
		cout << i-> getNombre() << endl;
		delete i;
		i = cola->extraer();
	}

	return 0;
}
