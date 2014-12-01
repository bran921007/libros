
#include <iostream>
#include "Lista.h"
#include "windows.h";
#include "conio.h";

using namespace itla;

char Menu()
{
	char Opcion;
	do{
		cout <<"\t Menu" << endl;
		cout <<"1. Agregar" << endl;
		cout <<"2. Mostrar" << endl;
		cout <<"3. Buscar" << endl;
		cout <<"4. Eliminar" << endl;
		cout <<"5. Salir" <<endl;
		cout << "Opcion: ";
		cin >> Opcion;
		if(Opcion < '1' || Opcion > '5'){
			system("cls");
			cout<<"Opcion Invalida";
			getch();
		}

	}while(Opcion < '1' || Opcion > '5');
	return Opcion;
}

int main() {

	char Opcion;
	Nodo* Aux = NULL;
	Nodo* Diglesica  = NULL;
	Nodo* Temp = NULL;
	Lista *Cadena = new Lista();
	int Numero=0;
	int indice = 1;
	//string continuar = NULL;
	string Articulo;

	do{
		Opcion = Menu();
		system("cls");
		switch(Opcion)
		{
			case '1':
				Aux = new Nodo();
				cout <<"Agregar"<<endl;

				indice = indice + Aux->Get_indice();
				cout << "Ingrese el articulo #" << indice << endl;
				cin >> Articulo;
				cout << "Ingrese el nuevo numero:";
				cin>>Numero;

				Aux->Set_articulo(Articulo);
				Aux->Set_numero(Numero);
				Aux->Set_indice(indice);

				Cadena->Agregar(Aux);
				indice++;

				cout<< "Articulo agregado exitosamente" <<endl;

			break;

			case '2':
				cout << "Mostrar" << endl;
				Temp = Cadena->Get_cabeza();


				while(Temp != NULL)
				{
					cout << "#" << + Temp->Get_indice() << " - " << Temp->Get_articulo() << " " << Temp->Get_numero() << endl;
					Temp = Temp->Get_enlace();
				}
			break;

			case '3':
				cout << "Buscar" <<endl;
				cout <<" Ingrese el numero a buscar"<<endl;
				cin >> Numero;
				Temp = Cadena->Buscar(Numero);
				if(Temp != NULL)
				{
					cout << "El numero fue encontrado " << Temp->Get_numero() <<endl;
				}else{
					cout << "El numero no fue hallado o no existe" <<endl;
				}
			break;

			case '4':
				cout << "Eliminar"<<endl;
				cout << "Ingrese el indice que desea eliminar";
				cin >> Numero;
				Temp = Cadena->Buscar(Numero);
				if(Temp != NULL)
				{
					Cadena->Eliminar(Numero);
					cout << "Numero eliminado exitosamente" << endl;
				}else{
					cout << "El numero no fue hallado o no existe" <<endl;
				}
			break;

			case '5':
				cout << "Fin de la aplicacion " << endl;
			break;

		}

//	getch();
//	system("cls");

	cout<<endl<<endl;
	system("pause");
	system("cls");

	}while(Opcion!='5');

	return 0;
}
