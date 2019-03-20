#pragma once
#include "Shape.h"
class Circle :
	public Shape
{
public:
	Circle(char *nombre);
	~Circle();
	void setBase();
	double perimeter();
	double area();
	void draw();
	string getFigureName();

private:
	float circleSize;
};

