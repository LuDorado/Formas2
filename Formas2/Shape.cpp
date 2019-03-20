#include "Shape.h"
#include <string>
#include <cstring>
#include <iostream>

using namespace std;

Shape::Shape(char *name)
{
	strcpy_s(figureName, name);
}


Shape::~Shape()
{
}
