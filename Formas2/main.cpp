#include "Shape.h"
#include "Circle.h"
#include "Square.h"
#include "Triangle.h"
#include <iostream>
#include <cstdlib>
#include <list>
#include <cstdio>
#include <string>
#include <cstring>


using namespace std;

list <Shape *>Figures;

int showMenu();
char *setLabel(string label, int choiceN);
void circleOpcion(int selec);
void squareOpcion(int selec);
void triangleOpcion(int selec);
void printList();


int main()
{
	int usrChoice;
	int ctr = 0;
	//Shape * lala;

	do {
		ctr++;
		usrChoice = showMenu();
		switch (usrChoice) 
		{
		case 1:
			circleOpcion(ctr);
			
			break;
		case 2:
			squareOpcion(ctr);

			break;
		case 3:
			triangleOpcion(ctr);

			break;
		default:
			cout << "OPCION INCORRECTA!!!\n";
			break;
		case 0: 

			break;
		}
	} while (usrChoice != 0);

	cout << Figures.size() << endl;

	for (list<Shape *>::iterator list_iter = Figures.begin();
		list_iter != Figures.end(); list_iter++) {

		cout << *list_iter << endl;
	
	}
	printList();

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

char *setLabel(string label, int choiceN)
{
	string rotnro = to_string(choiceN);
	label.append(rotnro);
	char *labelReady = &label[0u];
	return  (labelReady);
}
void circleOpcion(int selec)
{
	string label = "circulo ";
	string rotnro = to_string(selec);
	label.append(rotnro);
	//char *labelReady = &label[0u];
	char *rotulo = &label[0u]; //setLabel(label, selec);//
	cout << rotulo << endl;

	Shape *circleOpcion = new Circle(rotulo);
	circleOpcion->setBase();
	cout << "Circle Perimeter = " << circleOpcion->perimeter() << endl;
	cout << "Circle Area = " << circleOpcion->area() << endl;

	Figures.push_back(circleOpcion);
	return;
}

void squareOpcion(int selec)
{
	//char *rotulo = setLabel( "cuadrado ", selec );
	string squareLabel = "cuadrado ";
	string rotnro = to_string(selec);
	squareLabel.append(rotnro);
	char *sRotulo = &squareLabel[0u];
	cout << sRotulo << endl;
	Shape *squareOpcion = new Square(sRotulo);
	squareOpcion->setBase();
	cout << "Square Perimeter = " << squareOpcion->perimeter() << endl;
	cout << "Square Area = " << squareOpcion->area() << endl;
	Figures.push_back(squareOpcion);
	return;
}

void triangleOpcion(int selec)
{
	string label = "triangulo ";
	string rotnro = to_string(selec);
	label.append(rotnro);
	char *rotulo = &label[0u];
	//char *rotulo = setLabel( "triangulo ", selec );
	Shape *triangleOption = new Triangle(rotulo);

	triangleOption->setBase();
	cout << "Triangle Perimeter = " << triangleOption->perimeter() << endl;
	cout << "Triangle Area = " << triangleOption->area() << endl;
	Figures.push_back(triangleOption);
	return;
}

void printList()
{
	int ctr = 1;
	for (list<Shape *>::iterator list_iter = Figures.begin();
		list_iter != Figures.end(); list_iter++) {
		//Shape &FigureChoosed = *list_iter;
		cout << "\nFigura elegida: " << (*list_iter)->getFigureName() << endl;
		(*list_iter)->draw();
	}
	return;
}
