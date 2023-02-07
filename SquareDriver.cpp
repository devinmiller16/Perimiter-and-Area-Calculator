//File that contains main
//<Programming Assignment 2> -- Calculates the perimeter and area of a square 
//after the user enters the length of a side. 
//CSIS 112-<D01>
//<Citations if necessary> -- Code for error cehcking provided by Prof. Terri Sipantzi.

#include <iostream>
#include <iomanip>
#include "Square.h"
using namespace std;

int main()
{
	cout << "Devin Miller - Assignment 2" << endl << endl;
	square square1;
	float s;
	
	cout << "Enter the side of the square or enter -1 to quit the program:  ";
	cin >> s; //Gets as input the side of a square. 

	while (cin.fail() || s < -1) //If the user enters anything less than -1 or 
	{							 //a letter an error message appears. 
		cout << "You must enter a number, and that number must be positive. Please try again or enter -1 to quit the program: " << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cin >> s;
	}
	cout << endl;

	while (s != -1) { //This loop occurs until the user enters -1 which then ends the program
		square1 = square(); //Initializes square to be zero.
		square1.setSide(s); //Sets the variable "side" in the header file.
		square1.getSide(s); //Returns "side".
		square1.showData(s);//Outputs the side, perimeter, and area. 
		cout << "Enter the side of the square or enter -1 to quit the program: "; //Asks the user for a new input.
		cin >> s;
		cout << endl;
	}

	system("pause");
	return 0;
}