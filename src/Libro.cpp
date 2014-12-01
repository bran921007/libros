/*
 * Libro.cpp
 *
 *  Created on: 30/11/2014
 *      Author: Danny
 */

#include "Libro.h"

Libro::Libro() {

	siguienteLibro = NULL;
}

int Libro::getId(){
	return id;
}

string Libro::getTitulo()  {
	return titulo;
}

string Libro::getAutor()  {
	return autor;
}


char Libro::getEstado()  {
	return estado;
}

int Libro::getCantidad()  {
	return cantidad;
}

Libro* Libro::getSiguienteLibro() {
	return siguienteLibro;
}

string Libro::getCodigoLibro()  {
	return codigoLibro;
}
int Libro::getPrecio()  {
	return precio;
}


void Libro::setSiguienteLibro(Libro* libro) {
	this->siguienteLibro = libro;
}

void Libro::setId(int id) {
	this->id = id;
}

void Libro::setTitulo(string titulo) {
	this->titulo = titulo;
}

void Libro::setAutor(string autor) {
	this->autor = autor;
}

void Libro::setCodigoLibro( string codigoLibro) {
	this->codigoLibro = codigoLibro;
}

void Libro::setEstado(char estado){
	this->estado = estado;
}

void Libro::setCantidad(int cantidad){
	this->cantidad = cantidad;
}
void Libro::setPrecio(int precio){
	this->precio = precio;
}

void Libro::crearLibro(int id, string titulo, string autor, string codigoLibro, char estado, int cantidad,int precio) {
	this->id = id;
	this->titulo = titulo;
	this->autor = autor;
	this->codigoLibro = codigoLibro;
	this->estado = estado;
	this->cantidad = cantidad;
	this->precio = precio;

}


Libro::~Libro() {
	// TODO Auto-generated destructor stub
}


