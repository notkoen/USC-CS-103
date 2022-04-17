//====================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 6 - threestep.cpp
// Date: 3/17/2022
// Additional Info: Coded in VSC and debugged using GCC
//--------------------

#include "draw.h"
#include "turtle.h"

int main()
{
	//Definte corners
	draw::setrange(-100, 100);
	
	//Create turtle @ x=0 y=0 facing angle 0 (right)
	Turtle leonardo(0, 0, 0);
	
	//Move turtle
	leonardo.move(80);
	leonardo.turn(90);
	leonardo.move(80);
	leonardo.turn(120);
	leonardo.move(160);
	return 0;
}