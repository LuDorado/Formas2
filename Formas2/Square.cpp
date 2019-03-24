#include <iostream>
#include <string>

using namespace std;

#include "Square.h"

Square::Square(char *nombre) : Shape(nombre)
{
	cout << "cuadrado construido\n";
}


Square::~Square()
{
	cout << "cuadrado destruido\n";
}

void Square::setBase()
{
	cout << "Ingrese medida del lado : ";
	cin >> squareSize;
	return;
}

double Square::perimeter()
{
	return (squareSize * 4);
}

double Square::area()
{
	return (squareSize * 2);
}

void Square::draw()
{
	cout << "\t ";
	for (int i = 0; i < squareSize; i++)
		cout << "_ ";
	for (int i = 0; i < squareSize; i++) {
		cout << endl << "\t";
		for (int j = 0; j < squareSize; j++)
			cout << "|_";
		cout << "|";
	}
	cout << "\n\n";
}

string Square::getFigureName()
{
	return (figureName);
}

