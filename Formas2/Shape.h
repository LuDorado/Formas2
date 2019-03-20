#pragma once
#include <string>
using namespace std;

class Shape
{
public:
	Shape(char* name);
	~Shape();
	virtual void setBase() = 0;
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void draw() = 0;
	virtual string getFigureName() = 0;

protected:
	float sizeLength;
	char figureName[20];
};

