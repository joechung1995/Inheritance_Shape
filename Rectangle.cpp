/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Functions for Rectangle header file
*********************************************************************/
#include "Rectangle.hpp"

/*********************************************************************
** Description: Constructor that takes two double parameters and passes them to the set methods
**
*********************************************************************/
Rectangle::Rectangle(double l, double w)
{
	setLength(l);
	setWidth(w);
}

/*********************************************************************
** Description: Set method for length of rectangle
**
*********************************************************************/
void Rectangle::setLength(double l)
{
	length = l;
}

/*********************************************************************
** Description: Set method for width of rectangle
**
*********************************************************************/
void Rectangle::setWidth(double w)
{
	width = w;
}

/*********************************************************************
** Description: Method for area of rectangle
**
*********************************************************************/
double Rectangle::Area() 
{
	return length * width;
}

/*********************************************************************
** Description: Method for parameter of rectangle
**
*********************************************************************/
double Rectangle::Perimeter() 
{
	return 2 * (length + width);
}