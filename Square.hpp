/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Header file for Square
*********************************************************************/
#ifndef SQUARE_HPP
#define SQUARE_HPP
#include "Rectangle.hpp"

// Square that inherits from Rectangle
class Square : public Rectangle
{
	public:
		Square(double); 			// constructor that takes one double parameter and passes it to the base class constructor for both parameters
		void setLength(double) ; 	// Square overrides the setLength()
		void setWidth(double) ; 	// Square overrides the setWidth()
};

#endif
