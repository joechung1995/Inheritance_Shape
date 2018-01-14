/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Functions for Square header file
*********************************************************************/
#include "Square.hpp"

/*********************************************************************
** Description: Constructor that takes one double parameter and passes it to the base class constructor for both parameters
**
*********************************************************************/
Square::Square(double width):Rectangle(width, width) {}


/*********************************************************************
** Description: If either of its dimensions is set to a new value, then both of its dimensions will be set to that new value
**
*********************************************************************/
void Square::setLength(double width)
{   
	// overridden versions call the versions in the superclass. 
	Rectangle::setLength(width);
	Rectangle::setWidth(width);
}

/*********************************************************************
** Description: If either of its dimensions is set to a new value, then both of its dimensions will be set to that new value
**
*********************************************************************/
void Square::setWidth(double width)
{
	setLength(width);
 }

