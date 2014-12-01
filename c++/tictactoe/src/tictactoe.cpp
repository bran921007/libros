#include <iostream>
#include <cstdlib>
using namespace std;

char tablero[3][3];
char jugadorActual = 'x';

void inicializar(){

	for(int i = 0; i<3; i++){
		for(int j=0; j<3; j++)
		{
			tablero[i][j] = '_';
		}
	}
}

bool hayGanador()
{
	//horizontal
	char jugadorEncontrado = tablero[0][0];
	for(int i =0; i<3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(tablero[i][j] == '_')
			{
				break;
			}
			if(jugadorEncontrado != tablero[i][j])
			{
				break;
			}
			jugadorEncontrado = tablero[i][j];
			if(j ==2)
			{
				cout <<"Ha ganado "<< jugadorEncontrado <<endl;
				return true;
			}
		}
	}

	//vertical

	for(int i =0; i<3; i++)
	{
		for(int j = 0; j < 3; j++)
		{
			if(tablero[j][i] == '_')
			{
				break;
			}
			if(jugadorEncontrado != tablero[i][j])
			{
				break;
			}
			jugadorEncontrado = tablero[i][j];
			if(j ==2)
			{
				cout <<"Ha ganado "<< jugadorEncontrado <<endl;
				return true;
			}
		}
	}
	//diagonal de izquierda a derecha

	for(int i = 0; i < 3; i++)
	{
		if(tablero[i][i] == '_')
		{
			break;
		}
		if(jugadorEncontrado != tablero[i][i])
		{
			break;
		}
		jugadorEncontrado = tablero[i][i];
		if(i ==2)
		{
			cout <<"Ha ganado "<< jugadorEncontrado <<endl;
			return true;
		}
	}

	//diagonal de derecha a izquierda
	jugadorEncontrado = tablero [0][2];
	for(int i = 2; i >= 0; i--)
	{
		if(tablero[2-i][i] == '_')
		{
			break;
		}
		if(jugadorEncontrado != tablero[2-i][i])
		{
			break;
		}
		jugadorEncontrado = tablero[2-i][i];
		if(i == 0)
		{
			cout <<"Ha ganado "<< jugadorEncontrado <<endl;
			return true;
		}
	}
	return false;
}

void desplegarTablero()
{
	for(int i = 0; i<3; i++)
	{
		for(int j =0; j<3; j++)
		{
			cout << tablero[i][j] << "\t" <<endl;
		}
	}
}
bool hayEmpate()
{
	for(int i = 0; i<3; i++)
	{
		for(int j = 0; j<3; j++)
		{
			if(tablero[i][j] =='_'){
				return false;
			}

		}
	}
	cout << "Hay un empate" << endl;
	return true;
}

int main() {
	inicializar();
	while(!hayGanador())
	{
		desplegarTablero();
		int fila = 0;
		int columna = 0;
		cout <<"En que fila quiere jugar la "<< jugadorActual <<"?" <<endl;
		cin >> fila;
		cout << "En que columna quiere jugar la "<< jugadorActual <<"?" <<endl;
		cin >> columna;
		if(tablero[fila][columna] != '_')
		{
			cout << "Esa casilla ya esta ocupada, intente de nuevo" << endl;
		}else{
			tablero[fila][columna] = jugadorActual;
			if(jugadorActual == 'x')
			{
				jugadorActual = 'O';
			}else
			{
				jugadorActual = 'x';
			}

		}

	}
	desplegarTablero();
	cout << "\n" << endl;
	system("pause>nul");

	return 0;
}
