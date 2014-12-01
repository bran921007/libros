#include<cstdlib>
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
void altas();
void bajas();
void buscar();
void consultas();
void modificaciones();
void salir();
void menu();
//Variables Globales
char nombre[30],grupo[10];
int semestre=0, edad=0, clave=0, auxClave=0;
bool encontrado=false;
char auxGrupo[10];
int main(){
    menu();
    return 0;
    system("PAUSE");
}
void menu(){
    int opcion=0;
    do{
        cout<<"Manejo de Archivos en C++"<<endl;
        cout<<"1. Altas"<<endl;
        cout<<"2. Bajas"<<endl;
        cout<<"3. Consultas"<<endl;
        cout<<"4. Buscar un Registro"<<endl;
        cout<<"5. Modificaciones"<<endl;
        cout<<"6. Salir"<<endl;
        cout<<"Que deseas hacer? ";
        cin>>opcion;
        switch(opcion){
            case 1:
                altas();
            break;
            case 2:
                bajas();
            break;
            case 3:
                consultas();
            break;
            case 4:
                buscar();
            break;
            case 5:
                modificaciones();
            break;
            case 6:
                salir();
            break;
            default:
                cout<<"¡Opcion Incorrecta!"<<endl;
        }
    }while(opcion!=6);
}//Fin funcion menu
void altas(){
    ofstream escritura;
    ifstream consulta;
    bool repetido=false;
    escritura.open("alumnos.txt",ios::out|ios::app);
    consulta.open("alumnos.txt",ios::in);
    if(escritura.is_open() && consulta.is_open()){
        cout<<"Ingresa la Clave del Alumno: ";
        cin>>auxClave;
        consulta>>clave;
        while(!consulta.eof()){
            consulta>>nombre>>semestre>>grupo>>edad;
            if(clave==auxClave){
                cout<<"Ya Existe un Registro con esta Clave"<<endl;
                repetido=true;
                break;
            }
            consulta>>clave;
        }
        if(repetido==false){
            cout<<"Ingresa el nombre del Alumno: ";
            cin>>nombre;
            cout<<"Ingresa el Semestre del Alumno: ";
            cin>>semestre;
            cout<<"Ingresa el Grupo del Alumno: ";
            cin>>grupo;
            cout<<"Ingresa la Edad del Alumno: ";
            cin>>edad;
            escritura<<auxClave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
            cout<<"Registro Ageragado"<<endl;
        }

    }else{
        cout<<"Error, el Archivo No se Pudo Abrir o No ha sido Creado"<<endl;
    }
    escritura.close();
    consulta.close();
}//Fin funcion altas

void consultas(){
    ifstream lectura;
    lectura.open("alumnos.txt",ios::out|ios::in);
    if(lectura.is_open()){
        cout<<"Registros del Archivo alumnos.txt"<<endl;
        cout<<"________________________________"<<endl;
        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
            cout<<"Clave: "<<clave<<endl;
            cout<<"Nombre: "<<nombre<<endl;
            cout<<"Semestre: "<<semestre<<endl;
            cout<<"Grupo: "<<grupo<<endl;
            cout<<"Edad: "<<edad<<endl;
            lectura>>clave;
            cout<<"________________________________"<<endl;
        }
    }else{
        cout<<"Error, el Archivo No se Pudo Abrir, No ha sido creado"<<endl;
    }
    lectura.close();
}//Fin funcion consultas

void bajas(){

    ofstream aux;
    ifstream lectura;
    encontrado=false;
    int auxClave=0;
    char auxNombre[30];
    aux.open("auxiliar.txt",ios::out);
    lectura.open("alumnos.txt",ios::in);

    if(aux.is_open() && lectura.is_open()){
        cout<<"Ingresa la Clave del Alumno que deseas Eliminar: ";
        cin>>auxClave;
        lectura>>clave;

        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;

            if(auxClave==clave){
                encontrado=true;

                cout<<"Registro Eliminado"<<endl;
            }else{
                aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
            }
            lectura>>clave;
        }
    }else{
        cout<<"No se pudo abrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontrado==false){
        cout<<"No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");


}
void buscar(){
    ifstream lectura;//Creamos la variable de tipo lectura
    lectura.open("alumnos.txt",ios::out|ios::in);//Abrimos el archivo
    //validando la apertura del archivo
    encontrado=false;
    if(lectura.is_open()){
        cout<<"Ingresa la Clave del Alumno que deseas Buscar: ";
        cin>>auxClave;
        lectura>>clave;//lectura adelantada

        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;//leyendo los campos del registro
            //Comparar cada registro para ver si es encontrado
            if(auxClave==clave){
                cout<<"______________________________"<<endl;
                cout<<"Clave: "<<clave<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Semestre: "<<semestre<<endl;
                cout<<"Grupo: "<<grupo<<endl;
                cout<<"Edad: "<<edad<<endl;
                cout<<"______________________________"<<endl;
                encontrado=true;
            }

            lectura>>clave;//lectura adelantada
        }
        if(encontrado==false){
            cout<<"No hay registros con la Clave "<<auxClave<<endl;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo, aun no ha sido Creado"<<endl;
    }
    //cerrando el archivo
    lectura.close();
}
void modificaciones(){
    ofstream aux;
    ifstream lectura;
    encontrado=false;
    int auxClave=0;
    char auxNombre[30];
    aux.open("auxiliar.txt",ios::out);
    lectura.open("alumnos.txt",ios::in);
    if(aux.is_open() && lectura.is_open()){
        cout<<"Ingresa la Clave del Alumno que deseas Modificar: ";
        cin>>auxClave;
        lectura>>clave;
        while(!lectura.eof()){
            lectura>>nombre>>semestre>>grupo>>edad;
            if(auxClave==clave){
                encontrado=true;
                cout<<"__________________________"<<endl;
                cout<<"Clave: "<<clave<<endl;
                cout<<"Nombre: "<<nombre<<endl;
                cout<<"Semestre: "<<semestre<<endl;
                cout<<"Grupo: "<<grupo<<endl;
                cout<<"Edad: "<<edad<<endl;
                cout<<"__________________________"<<endl;
                cout<<"Ingresa el Nuevo Nombre del alumno con Clave "<<clave<<": ";
                cin>>auxNombre;
                aux<<clave<<" "<<auxNombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
                cout<<"Registro Modificado"<<endl;
            }else{
                aux<<clave<<" "<<nombre<<" "<<semestre<<" "<<grupo<<" "<<edad<<endl;
            }
            lectura>>clave;
        }
    }else{
        cout<<"No se pudoAbrir el Archivo o aun no ha sido Creado"<<endl;
    }
    if(encontrado==false){
        cout<<"No se encontro ningun registro con clave "<<auxClave<<endl;
    }
    aux.close();
    lectura.close();
    remove("alumnos.txt");
    rename("auxiliar.txt","alumnos.txt");
}
void salir(){
    cout<<"Programa Finalizado"<<endl;
}
