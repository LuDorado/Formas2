#include "Circle.h"
#include <iostream>
#include <string>
#define _USE_MATH_DEFINES
#include <math.h>

using namespace std;

Circle::Circle(char *nombre) : Shape(nombre)
{
}


Circle::~Circle()
{
}

void Circle::setBase()
{
	cout << "Ingrese radio de la circunferencia : ";
	cin >> circleSize;
	return;
}

double Circle::perimeter()
{
	return (2 * M_PI *circleSize);
}

double Circle::area()
{
	return (M_PI * pow(circleSize, 2));
}

void Circle::draw()
{
	int margin = (int)circleSize;

	for (int i = 0; i < margin * 2; i++) {
		for (int j = 0; j < margin * 2; j++) {
			if (pow((j - margin), 2.0) + pow((i - margin), 2.0) < pow(margin, 2))
				cout << "* ";
			else
				cout << "  ";
		}
		cout << "\n";
	}
	cout << "\n";
	return;
}



string Circle::getFigureName()
{
	return (figureName);
}


