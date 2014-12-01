#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdlib>

#include <math.h>
using namespace std;

int sumar(int primerNumero, int segundoNumero)
{
	return primerNumero + segundoNumero;
}

int main() {
	int primer = 0;
	int segundo = 0;
	printf("Introduzca el primer numero ");
	scanf("%d",&primer);
	printf("Introduzca el segundo numero");
	scanf("%d", &segundo);
	printf("%d", sumar(primer,segundo));
	system("pause>null");

	//%d = entero
	//%f = tipo double
}
