
#include "Agenda.h"

namespace itla {

Agenda::Agenda() {
	// TODO Auto-generated constructor stub

	telefono = 0;
	encontrado = false;
	indice = 0;
	auxIndice = 0;

}

Agenda::~Agenda() {
	// TODO Auto-generated destructor stub
}

void Agenda::agregar() {

	ofstream escritura;
	ifstream consulta;
	bool repetido = false;

	escritura.open("contactos.txt", ios::out | ios::app );
	consulta.open("contactos.txt", ios::in);

	if(escritura.is_open() && consulta.is_open())
	{
		cout << "Ingrese el indice del contacto" << endl;
		cin >> auxIndice;
		consulta>>indice;
		while(!consulta.eof()){
			consulta >> nombre >> telefono;
			if(indice == auxIndice)
			{
				cout<<"Ya Existe un Registro con este indice"<<endl;
                repetido=true;
                break;
			}
			consulta >> indice;
		}
		if(repetido==false){

			cout << "Ingrese el nombre" << endl;
			cin >> nombre;
			cout << "Ingrese el numero" <<endl;
			cin >> telefono;

			escritura << auxIndice << " " << nombre << " " << telefono << endl;
			cout << "Registra agregado" <<endl;
		}

	}else{
	cout << "Error, el archivo no se pudo abrir o no se ha creado" << endl;
	}
	escritura.close();
	consulta.close();

}

void Agenda::lista() {

	ifstream lectura;
	lectura.open("contactos.txt", ios::out | ios::in);

	if(lectura.is_open()){
		lectura>>indice;

		while(!lectura.eof())
		{
			lectura >> nombre >> telefono;
			cout << "indice:   " << indice << endl;
			cout << "nombre:   " << nombre << endl;
			cout << "telefono: " << telefono << endl;
			lectura >> indice;
			cout<<"________________________________"<<endl;
		}
	}else{
		cout << "Error, el archivo no se pudo abrir o no se ha creado" << endl;
	}
	lectura.close();

}

void Agenda::actualizar() {

		ofstream aux;
		ifstream lectura;
		encontrado = false;

		int auxIndice = 0;
		char auxNombre[30];

		aux.open("auxiliar.txt", ios::out);
		lectura.open("contactos.txt", ios::in);

		if(aux.is_open() && lectura.is_open())
		{
			cout << "Ingresa el indice del contacto que deseas modificar" << endl;
			cin >> auxIndice;
			lectura >> indice;
			while(!lectura.eof())
			{
				lectura >> nombre >> telefono;
				if(auxIndice == indice)
				{
					encontrado = true;

					cout << "Indice " << indice << endl;
					cout << "Nombre " << nombre << endl;
					cout << "Telefono " << telefono << endl;

					cout << "Ingresa el Nuevo nombre del contacto" << endl;
					cin >> auxNombre;
					aux <<indice << " "<< auxNombre << " "<< telefono << endl;
					cout << "Registro modificado" << endl;
				}else{
					aux << indice << " " << nombre << " " << telefono <<endl;
				}
				lectura >> indice;
			}
		}else{
			cout << "Error, el archivo no se pudo abrir o no se ha creado" << endl;
		}
		if(encontrado == false)
		{
			cout << "No se encontro ningun registro con telefono: " << auxIndice << endl;
		}
		aux.close();
		lectura.close();
		remove("contactos.txt");
		rename("auxiliar.txt","contactos.txt");

}

void Agenda::leer() {

}

void Agenda::borrar() {
	ofstream aux;
	ifstream lectura;

	encontrado = false;
	int auxIndice = 0;
	//char auxNombre[30];
	aux.open("auxiliar.txt", ios::out);
	lectura.open("contactos.txt", ios::in);

	if(aux.is_open() && lectura.is_open())
	{
		cout << "Ingresa el indice del contacto que desea eliminar" << endl;
		cin >> auxIndice;
		lectura >> indice;
		while(!lectura.eof())
		{
			lectura >> nombre >> telefono;
			if(auxIndice == indice)
			{
				encontrado = true;
				cout << "Registro Eliminado" << endl;
			}else{
				aux << indice << " " << nombre << " " << telefono <<endl;
			}
			lectura >> indice;
		}
	}else{
		cout << "Error, el archivo no se pudo abrir o no se ha creado" << endl;
	}
	if(encontrado == false)
	{
		cout << "No se encontro ningun registro con telefono: " << auxIndice << endl;
	}
	aux.close();
	lectura.close();
	remove("contactos.txt");
	rename("auxiliar.txt","contactos.txt");
}

void Agenda::saltoLinea(ifstream& stream, int nLines)
{
	string dummyLine;
	for(int i = 0; i < nLines; ++i)
	{
		getline(stream,dummyLine);
	}
}

} /* namespace itla */
