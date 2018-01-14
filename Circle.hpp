/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Header file for Circle
*********************************************************************/
#ifndef CIRCLE_HPP
#define CIRCLE_HPP
#include "Shape.hpp"
#include <iostream>

// class Circle inherits from Shape
class Circle : public Shape
{
	private:
		double radius; 

	public:
		Circle(double = 0);				// constructor takes a double parameter and passes it to the set method
		void setRadius(double);			// set method for the circle radius
		virtual double Area() ;			// the class overrides the Shape virtual methods to return the area of a circle
		virtual double Perimeter() ;	// the class overrides the Shape virtual methods to return the perimeter of a circle
};
#endif
