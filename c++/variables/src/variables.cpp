//============================================================================
// Name        : variables.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {

	int acumuladora = 0;
	int numero = 0;
	char seguir = 's';

	while(seguir == 's')
	{
		cout << "Introduzca un numero" << endl;
		cin >> numero;
		acumuladora  = acumuladora + numero;
		cout << "Desea seguir introduciendo numeros?" << endl;
		fflush(stdin);
		cin >> seguir;

	}

	cout << "La sumatoria es " << acumuladora << endl;
	system("pause>nul");
}
