#include <string>
#include <iostream>
#include <math.h>

using namespace std;

#include "Triangle.h"

Triangle::Triangle(char *nombre) : Shape(nombre)
{
	cout << "triangulo construido\n";
}


Triangle::~Triangle()
{
	cout << "triangulo destruido\n";

}

void Triangle::setBase()
{
	cout << "Ingrese medida del lado : ";
	cin >> triangleSize;
	return;
}

double Triangle::perimeter()
{
	return (triangleSize * 3);
}

double Triangle::area()
{
	float triangleHigh = sqrt(pow(triangleSize, 2) + pow(triangleSize/2, 2));
	return ((triangleSize * triangleHigh) / 2);
}

void Triangle::draw()
{
	int margin = 0;
	int steps = 0;

	for (int i = 0; i <= triangleSize; i++) {
		margin++;
		for (int i = 0; i <= (triangleSize - margin); i++)
			cout << " ";
		for (int i = 0; i <= margin; i++)
			cout << "/\\";
		cout << "\n";
	}
	cout << "\n";
}

string Triangle::getFigureName()
{
	return (figureName);
}
