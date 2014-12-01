#include "Vellonera.h";
using namespace itla;

int main() {

	int auxIndice = 0;
	int indice = 4;
	string titulo ="";
	string artista ="";
	char confirmar = 'S';

	double duracion = 0.0;

	int opt = 0;


	Nodo* aux = NULL;
	Nodo* temp = NULL;
	Vellonera* vellonera = new Vellonera();
	vellonera->agregado();


	vellonera->agregar(vellonera->getNodo1());
	vellonera->agregar(vellonera->getNodo2());
	vellonera->agregar(vellonera->getNodo3());

	do{
		opt = vellonera->menu();
		switch(opt)
		{
		case 1:
			cout << "Agregar Elemento " <<endl;
			cout << "_________________"<<endl;
			//Metodo agregar
			//indice = indice + aux->getIndice();
			cout << "Introduzca el nombre de la cancion: " << endl;
			cin >>titulo;
			cout << "Introduzca el nombre del artista: "<<endl;
			cin >>artista;
			cout << "Introduzca la duracion : "<<endl;
			cin >>duracion;

			aux = new Nodo();
			aux->setTitulo(titulo);
			aux->setArtista(artista);
			aux->setDuracion(duracion);
			aux->setIndice(indice);

			vellonera->agregar(aux);
			indice ++;
			//Fin metodo agregar
		break;

		case 2:
			//Inicio metodo listar de menor a mayor --
			temp = vellonera->getPrimerElemento();

			cout<<" \t" << "Titulo\t"<<"Artista\t" << "Duracion"<<endl;
			//indice = temp->getIndice();
			while(temp != NULL)
			{

				//temp->setIndice(indice);
				cout << temp->getIndice() << "-\t" <<temp->getTitulo() << "\t" << temp->getArtista()<<"\t"<< temp->getDuracion() << endl;
				temp = temp->getSiguiente();
				//indice++;
			}
				//Fin metodo listar de menor a mayor
		break;

		case 3:
			cout<<"Mostrar cancion actual" <<endl;
			//temp = vellonera->obtener();
			if(temp == NULL){

				temp = vellonera->getPrimerElemento();
			}else{
				//temp = temp->getSiguiente();
				temp = vellonera->buscar(temp->getIndice());
			}

			cout << "Titulo\tArtista" <<endl;
			cout << temp->getTitulo() << "\t" << temp->getArtista()<< endl;
		break;

		case 4:
			cout<<"Proxima cancion" <<endl;

			//temp = vellonera->buscar(auxIndice);

				temp = temp->getSiguiente();
				temp = vellonera->buscar(temp->getIndice());

			cout << "Titulo\tArtista" <<endl;
			cout << temp->getTitulo() << "\t" << temp->getArtista()<< endl;
		break;

		case 5:
			cout <<"Cancion anterior" << endl;
			temp = vellonera->getUltimoElemento();
			temp = temp->getAnterior();

			cout << "Titulo\tArtista" <<endl;
			cout << temp->getTitulo() << "\t" << temp->getArtista()<< endl;
		break;

		case 6:
			vellonera->repetirLista();
			cout<< "Repeticion en lista activado"<< endl;
		break;

		case 7:
			cout << "Introduzca el numero de la cancion que desea eliminar" <<endl;
			cout<<" \t" << "Titulo\t"<<"Artista\t" << "Duracion"<<endl;

			temp = vellonera->getPrimerElemento();
			while(temp != NULL)
			{
				cout << temp->getIndice() << "-\t" <<temp->getTitulo() << "\t" << temp->getArtista()<<"\t"<< temp->getDuracion() << endl;
				temp = temp->getSiguiente();

			}
			cin >> auxIndice;

			temp = vellonera->buscar(auxIndice);

			//char conf[1];
			cout << "Confirma que desea eliminar: " << temp->getTitulo() <<","<< temp->getArtista() <<" "<< temp->getDuracion()<< "? (S/N)" <<endl;
			cin>>confirmar;
			if(confirmar == 'S')
			{
				if(temp != NULL)
				{
					vellonera->eliminar(auxIndice);
					cout << "Musica eliminado exitosamente" << endl;
				}else{
					cout << "El numero no fue hallado o no existe" <<endl;
				}
			}else{
				cout << "Regresar al menu" << endl;
			}

		break;

		case 8:
			cout << "Saliendo del sistema..." << endl;
			system(0);
		break;
		}
		system("pause>null");
		system("cls");

	}while(opt !=8);


	return 0;
}



