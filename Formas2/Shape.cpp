#include <string>
#include <cstring>
#include <iostream>

using namespace std;

#include "Shape.h"

Shape::Shape()
{
}

Shape::Shape(string name)
{
	figureName = name;
	cout << "base construida\n";
}

Shape::~Shape()
{
	cout << "base destruida\n";
}
