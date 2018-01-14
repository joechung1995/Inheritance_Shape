/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Functions for Circle header file
*********************************************************************/
#include "Circle.hpp"

const double Pi = 3.1415;

/*********************************************************************
** Description: Constructor that takes a double parameters and passes them to the set methods
**
*********************************************************************/
Circle::Circle(double r)
{
	setRadius(r);
}

/*********************************************************************
** Description: Set method for radius of circle
**
*********************************************************************/
void Circle::setRadius(double r)
{
	radius = r;
}

/*********************************************************************
** Description: Method for area of circle
**
*********************************************************************/
double Circle::Area() 
{
	return Pi * radius * radius;
}

/*********************************************************************
** Description: Method for perimeter of circle
**
*********************************************************************/
double Circle::Perimeter() 
{
	return 2 * Pi * radius;
}