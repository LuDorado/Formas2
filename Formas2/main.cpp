#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
#include <cstdlib>
#include <map>
#include <cstdio>
#include <string>
#include <cstring>

using namespace std;

int showMenu();
//string setLabel(string label, int choiceN);
Shape *circleOpcion();
Shape *squareOpcion();
Shape *triangleOpcion();
//void printList();


int main()
{
	int usrChoice;
	int ctr = 1;
	map <int, Shape *> Figures;

	do {
		usrChoice = showMenu();
		switch (usrChoice) 
		{
		case 1:
			Figures.insert(pair<int, Shape*>(ctr, circleOpcion()));
			ctr++;
			break;

		case 2:
			Figures.insert(pair<int, Shape*>(ctr, squareOpcion()));
			ctr++;
			break;

		case 3:
			Figures.insert(pair<int, Shape*>(ctr, triangleOpcion()));
			ctr++;
			break;

		default:
			cout << "OPCION INCORRECTA!!!\n";
			break;

		case 0: 
			break;
		}
	} while (usrChoice != 0);
	for (multimap<int, Shape *>::iterator list_iter = Figures.begin();
		list_iter != Figures.end(); ++list_iter) {
		cout << "\nFigura elegida " << (*list_iter).first <<": " << (*list_iter).second->getFigureName()<< endl;
		(*list_iter).second->draw();
	}
	for (multimap<int, Shape *>::iterator list_iter = Figures.begin();
		list_iter != Figures.end(); list_iter++) {
		delete (*list_iter).second;

	}
	Figures.clear();

	system("pause");
	return 0;
}

int showMenu()
{
	int opcion;
	cout << "****************\n";
	cout << "* 1- CIRCULO   *\n* 2- CUADRADO  *\n* 3- TRIANGULO *\n";
	cout << "****************\n";
	cout << "Figura seleccionada: ";
	cin >> opcion;
	return opcion;
}

Shape *circleOpcion()
{
	Shape *circleOpcion = new Circle("circulo");
	circleOpcion->setBase();
	cout << "Circle Perimeter = " << circleOpcion->perimeter() << endl;
	cout << "Circle Area = " << circleOpcion->area() << endl;
	//Figures.push_back(circleOpcion);
	return(circleOpcion);
}

Shape *squareOpcion()
{
	Shape *squareOpcion = new Square("cuadrado ");
	squareOpcion->setBase();
	cout << "Square Perimeter = " << squareOpcion->perimeter() << endl;
	cout << "Square Area = " << squareOpcion->area() << endl;
	//Figures.push_back(squareOpcion);
	return(squareOpcion);
}

Shape *triangleOpcion()
{
	Shape *triangleOption = new Triangle("triangulo ");

	triangleOption->setBase();
	cout << "Triangle Perimeter = " << triangleOption->perimeter() << endl;
	cout << "Triangle Area = " << triangleOption->area() << endl;
	//Figures.push_back(triangleOption);
	return(triangleOption);
}
/*
string setLabel(string label, int choiceN)
{
string rotnro = to_string(choiceN);
label.append(rotnro);
string label = "triangulo ";
string rotnro = to_string(selec);
label.append(rotnro);
char *rotulo = &label[0u];
//string triangleLabel = setLabel( "triangulo ", selec );

return  label;
}

void printList()
{
	for (list<Shape *>::iterator list_iter = Figures.begin();
		list_iter != Figures.end(); list_iter++) {
		//Shape &FigureChoosed = *list_iter;
		cout << "\nFigura elegida: " << (*list_iter)->getFigureName() << endl;
		(*list_iter)->draw();
	}
	return;
}
*/