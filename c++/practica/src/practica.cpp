//============================================================================
// Name        : practica.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;

int sumar(int a, int b)
{
	return a+b;
}

int main() {
	cout << sumar(5,9) << endl;
	int enteros[3] ={34, 56, 51};
	for(int i =0 ; i <3 ; i++)
	{
		cout << enteros[i] << endl;
	}
	string nombre;
	cout << "Introduzca su nombre ";
	cin >>nombre;
	cout << "Hola " << nombre << endl;
	if(nombre =="Raydelto")
	{
		cout << "Eres el profesor" << endl;
	}else
	{
		cout << "Eres el estudiante" << endl;
	}
	system("pause");
	return 0;
}
