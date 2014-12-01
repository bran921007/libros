
#include "Vellonera.h";

namespace itla {

Vellonera::Vellonera() {
	// TODO Auto-generated constructor stub
	primerElemento = NULL;
	ultimoElemento = NULL;
	//pendiente a borrarlo
	nodo1 = NULL;
	nodo2 = NULL;
	nodo3 = NULL;
}

void Vellonera::agregar(Nodo* elemento) {

	if(primerElemento == NULL)
	{
		elemento->setAnterior(NULL);
		primerElemento = elemento;
		ultimoElemento = elemento;
	}else{
		elemento->setAnterior(ultimoElemento);
		ultimoElemento->setSiguiente(elemento);
		ultimoElemento = elemento;
	}

}

void Vellonera::listar() {
}

void Vellonera::cancionActual() {
}

void Vellonera::proximaCancion() {
}

void Vellonera::cancionAnterior() {
}

void Vellonera::repetirLista() {
}

void Vellonera::eliminar(int indice) {

	Nodo* busqueda = primerElemento;
	Nodo* anterior = NULL;
		if(busqueda->getIndice() == indice)
		{

			primerElemento = primerElemento->getSiguiente();
		}else{
			while(busqueda != NULL && busqueda->getIndice()!= indice)
			{
				anterior = busqueda;
				busqueda = busqueda->getSiguiente();
			}if(busqueda !=NULL)
			{
				anterior->setSiguiente(busqueda->getSiguiente());
			}
		}
		delete busqueda;

}

int Vellonera::menu() {
	int opcion=0;
		do{
			cout << "1- Agregar nueva cancion" <<endl;
			cout << "2- Visualizar canciones(de menor a mayor)" <<endl;
			cout << "3- Mostrar cancion actual" <<endl;
			cout << "4- Proxima cancion" <<endl;
			cout << "5- Cancion anterior" <<endl;
			cout << "6- Activar Repeticion en lista" <<endl;
			cout << "7- Eliminar" <<endl;
			cout << "8- Salir" <<endl;
			cout << "Elija una opcion =>" << endl;
			cin >> opcion;
		}while(opcion >7 && opcion<1);
		return opcion;
}

void Vellonera::agregado() {

	nodo1 = new Nodo();
	nodo2 = new Nodo();
	nodo3 = new Nodo();

	nodo1->setTitulo("DSound");
	nodo1->setArtista("Bonobo");
	nodo1->setDuracion(10.2);
	nodo1->setIndice(1);

	nodo2->setTitulo("Dictap");
	nodo2->setArtista("Tycho");
	nodo2->setDuracion(14.5);
	nodo2->setIndice(2);

	nodo3->setTitulo("Dive");
	nodo3->setArtista("Secret");
	nodo3->setDuracion(62.9);
	nodo3->setIndice(3);


}

Nodo* Vellonera::obtener() {
	Nodo* retorno = primerElemento;
	if(primerElemento == NULL)
	{
		return NULL;
	}else if(primerElemento->getSiguiente() != NULL)
	{
		primerElemento = primerElemento->getSiguiente();
	}else{
		primerElemento = NULL;
	}
	return retorno;
}

Nodo* Vellonera::buscar(int indice) {
	Nodo* busqueda = primerElemento;
	while(busqueda !=NULL && busqueda->getIndice()!=indice)
	{
		busqueda = busqueda->getSiguiente();

	}
	return busqueda;
}

Vellonera::~Vellonera() {


}

} /* namespace itla */


