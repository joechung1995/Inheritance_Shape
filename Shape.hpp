/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Header file for Shape
*********************************************************************/
#ifndef SHAPE_HPP
#define SHAPE_HPP
#include <vector>
#include <iostream>

using namespace std;

// Abstract class called Shape. It should have pure virtual methods area and perimeter.
class Shape
{
	public:
		virtual double Area() = 0;			// virtual method for area
		virtual double Perimeter() = 0;		// virtual method for perimeter
};

#endif
