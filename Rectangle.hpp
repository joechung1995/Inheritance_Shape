/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Header file for Rectangle
*********************************************************************/
#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP
#include "Shape.hpp"

//class Rectangle inherits from Shape.  
class Rectangle : public Shape
{
	private:
		double length;
		double width;                //i love you
	public:
		Rectangle(double = 0, double = 0); 	// constructor that takes two double parameters and passes them to the set methods
		void setLength(double); 			// set methods for Rectangle length
		void setWidth(double);				// set methods for Rectangle Width
		virtual double Area() ;				// class overrides the Shape virtual methods to return the area of Rectangle
		virtual double Perimeter();			// class overrides the Shape virtual methods to return the perimeter of Rectangle
};

#endif 
