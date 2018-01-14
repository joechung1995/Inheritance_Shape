/*********************************************************************
** Author: Tso-Yi (Joe) Chung
** Date: Nov/10/2017
** Description: Function to solve average area of shapes
*********************************************************************/
#include "Shape.hpp"

using namespace std;

// Function declaration
double averageArea(vector<Shape*>);

/*********************************************************************
** Description: Function that takes vector of Shape-pointers as parameter and return the average area of Shapes
**
*********************************************************************/
double averageArea(vector<Shape*> s) 
{
	double result = 0.0;
	
	for (unsigned int i = 0; i < s.size(); i++)
	{
		result = result + s.at(i)->Area();
	}
	
	return result / s.size();
}
