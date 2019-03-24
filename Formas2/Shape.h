//#pragma once 
#ifndef SHAPE_H
#define SHAPE_H


#include <string>

using namespace std;

class Shape
{
protected:
	float sizeLength;
	string figureName;

public:
	Shape();
	Shape(string name);
	virtual ~Shape() = 0; 
	virtual void setBase() = 0;
	virtual double perimeter() = 0;
	virtual double area() = 0;
	virtual void draw() = 0;
	virtual string getFigureName() = 0;
};

#endif