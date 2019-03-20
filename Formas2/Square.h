#pragma once
#include "Shape.h"
class Square :
	public Shape
{
public:
	Square(char *nombre);
	~Square();
	void setBase();
	double perimeter();
	double area();
	void draw();
	string getFigureName();

private:
	float squareSize;
};

