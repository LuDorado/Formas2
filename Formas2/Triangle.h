#pragma once
#include "Shape.h"
class Triangle :
	public Shape
{
public:

	Triangle(char *name);
	~Triangle();
	void setBase();
	double perimeter();
	double area();
	void draw(); 
	string getFigureName();

private:
	float triangleSize;
};

