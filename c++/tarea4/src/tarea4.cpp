
#include "Agenda.h"
using namespace itla;

int menu()
{
	int opcion=0;
	do{
		cout << "1- Insertar Contacto" <<endl;
		cout << "2- Listar Contactos" <<endl;
		cout << "3- Actualizar contacto" <<endl;
		cout << "4- Borrar contacto" <<endl;
		cout << "5- Salir" <<endl;
		cout << "Elija una opcion =>" << endl;
		cin >> opcion;
	}while(opcion >6 && opcion<1);
	return opcion;
}

int main() {


	Agenda* agenda = new Agenda();

	int opt = 0;

	do{
		opt = menu();
		switch(opt){

		case 1:
			cout << "Agregar Contacto" << endl;
			agenda->agregar();
		break;
		case 2:
			cout << "Listar Contactos" << endl;
			agenda->lista();
		break;
		case 3:
			cout << "Actualizar Contactos" << endl;
			agenda->actualizar();
		break;
		case 4:
			cout << "Eliminar Contacto" << endl;
			agenda->borrar();
		break;
		case 5:
			cout << "Salir" << endl;
		break;
		}
		system("pause>null");
		system("cls");

	}while(opt!=5);


	//archivo << "Contacto agregado" <<endl;

/*	temp = agenda->getPrimerElemento();
	string nom ="";
	int tel = 0;

	ifstream lectura("contactos.txt");

	lectura.close();*/










	return 0;
}
