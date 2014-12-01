/*
 * Libro.h
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#ifndef LIBROS_H_
#define LIBROS_H_
#include <string>
using namespace std;
class Libro {
private:
	int id;
	string titulo;
	string autor;
	string codigoLibro;
	char estado;
	int cantidad;
	int precio;
	Libro* siguienteLibro;

public:
	Libro();
	void crearLibro(int id, string titulo, string autor, string codigo , char estado, int cantidad, int precio);
	void eliminarLibro(int id);
	//void modificarCliente(int id, campo);
	virtual ~Libro();
	int getId();
	int getCantidad();
	int getPrecio();
	char getEstado();
	string getTitulo();
	string getAutor();
	Libro* getSiguienteLibro();
	string getCodigoLibro();


	void setId( int id);
	void setTitulo(string titulo);
	void setAutor(string autor);
	void setEstado(char estado);
	void setCantidad(int cantidad);
	void setSiguienteLibro(Libro* libro);
	void setCodigoLibro( string codigoLibro);
	void setPrecio(int precio);

};

#endif /* CLIENTE_H_ */
