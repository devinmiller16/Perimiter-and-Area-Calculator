//Class implementation file
#include <iostream>
#include "Square.h"
using namespace std;


void square::setSide(float s) //Sets the variable "s" to "side" if it is greater than 0.
{
	if (s >= 0)
		side = s;
	else
		side = 0;
}

void square::showData(float) //Outputs the data using the getSide function, calcPerimeter function, and calcArea function.
{
	cout << "Side: " << getSide(side) << endl;
	cout << "Perimeter: " << calcPerimeter(side) << endl;
	cout << "Area: " << calcArea(side) << endl;
}

float square::calcPerimeter(float) //Calculates the perimeter and returns its value.
{
	side = 4 * side;
	return side;
}

float square::calcArea(float) //Calculates the area and returns its value. 
{
	return side * side;
}

float square::getSide(float) const //Gets the side by returning the value of side.
{
	return side;
}

square::square() //Sets side equal to zero until data is passed to it. 
{
	side = 0;
}
