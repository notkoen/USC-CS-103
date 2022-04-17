//====================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 6 - turtle.h
// Date: 3/17/2022
// Additional Info: Coded in VSC and debugged using GCC
//--------------------

#include <cmath>
#include "draw.h"
using namespace std;

class Turtle
{
	//Declare private data
	private:
		double x, y, dir;
		Color colour;
		bool visible;
		
	//Declare public data members
	public:
		//Declare function with the default parameters
		Turtle(double x0 = 0, double y0 = 0, double dir0 = 180);
		
		//Declare methods
		void move(double dist);
		void turn(double deg);
		void setColor(Color c);
		void off();
		void on();
};
