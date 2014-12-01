//============================================================================
// Name        : listaEnlazada.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <string>
using namespace std;

struct nodo{

		string articulo;
		int nro;        // en este caso es un numero entero

       struct nodo *sgte;
};

typedef struct nodo *Tlista;


void insertarFinal(Tlista &lista, string articulo, int valor)
{
    Tlista t, q = new(struct nodo);

    q->articulo = articulo;
    q->nro  = valor;
    q->sgte = NULL;

    if(lista==NULL)
    {
        lista = q;
    }
    else
    {
        t = lista;
        while(t->sgte!=NULL)
        {
            t = t->sgte;
        }
        t->sgte = q;
    }

}

void reportarLista(Tlista lista)
{
     int i = 0;

     while(lista != NULL)
     {
          cout <<' '<< i+1 <<") " << lista->nro << lista->articulo << endl;
          lista = lista->sgte;
          i++;
     }
}


void eliminarElemento(Tlista &lista, int valor)
{
    Tlista p, ant;
    p = lista;

    if(lista!=NULL)
    {
        while(p!=NULL)
        {
            if(p->nro==valor)
            {
                if(p==lista)
                    lista = lista->sgte;
                else
                    ant->sgte = p->sgte;

                delete(p);
                return;
            }
            ant = p;
            p = p->sgte;
        }
    }
    else
        cout<<" Lista vacia..!";
}



void menu1()
{
    cout<<"\n\t\tLISTA ENLAZADA SIMPLE\n\n";
    cout<<" 2. INSERTAR AL FINAL                "<<endl;
    cout<<" 4. REPORTAR LISTA                   "<<endl;
    cout<<" 6. ELIMINAR ELEMENTO 'V'            "<<endl;
    cout<<" 8. SALIR                            "<<endl;

    cout<<"\n INGRESE OPCION: ";
}


/*                        Funcion Principal
---------------------------------------------------------------------*/

int main()
{
    Tlista lista = NULL;
    int op;     // opcion del menu
    string _articulo;
    int _dato;  // elemenento a ingresar
    //int pos;    // posicion a insertar

    do
    {
        menu1();  cin>> op;

        switch(op)
        {

            case 2:

                 cout<< "\n Articulo a insertar: ";
                 cin>> _articulo;
                 cout << "NUMERO A INSERTAR: ";
                 cin>> _dato;
                 insertarFinal(lista, _articulo, _dato );
            break;


            case 4:

                 cout << "\n\n MOSTRANDO LISTA\n\n";
                 reportarLista(lista);
            break;
            case 6:

                cout<<"\n Valor a eliminar: "; cin>> _dato;

                eliminarElemento(lista, _dato);
            break;


                    }

        cout<<endl<<endl;
        system("pause");  system("cls");

    }while(op!=8);


   system("pause");
   return 0;
}
