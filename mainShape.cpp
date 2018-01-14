/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Main file to test Shape header file
*********************************************************************/
#include <iostream>
#include "Shape.hpp"
#include "Rectangle.hpp"
#include "Square.hpp"
#include "Circle.hpp"
//#include "averageArea.cpp"

using namespace std;

// Function declaration
double averageArea(vector<Shape*>);

int main() 
{
	cout << "Vector of Shape-pointers is created\n";
	vector<Shape*> v;
	
	cout << "Three circles are added to vector\n";
	v.push_back(new Circle(1));
	v.push_back(new Circle(2));
	v.push_back(new Circle(3));
	
	cout << "Three rectangles are added to vector\n";
	v.push_back(new Rectangle(1, 2));
	v.push_back(new Rectangle(2, 3));
	v.push_back(new Rectangle(3, 4));
	
	cout << "Three squares are added to vector\n";
	v.push_back(new Square(1));
	v.push_back(new Square(2));
	v.push_back(new Square(3));
	
	cout << "The average area of all these shapes equals " << averageArea(v) << endl;

	
	system("PAUSE");
	return 0;
}
