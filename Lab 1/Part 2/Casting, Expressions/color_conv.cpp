/* Author: Aaron Kuo
 * Program: color_conv
 * Class: USC CSCI 103
 * Assignment: Lab 1 Part 2 - Casting, Expressions
 * Description: Converts RGB -> CMYK color representation
 * Additional Info: Coded in Visual Studio Code and compiled/debugged with GCC
 */

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	// Declare and initialize variables
	//-- RGB --
	int r = 0;
	int g = 0;
	int b = 0;
	
	// Prompt and get user input
	cout << "Enter 3 integers (red, green, and blue), in that order: ";
	// Enter your code here
	cin >> r >> g >> b;
	
	//-- Convert RGB Values for cleaner looking code --
	double red = r / 255.00;
	double green = g / 255.00;
	double blue = b / 255.00;
	
	//-- Black / White --
	double white = max(max(red, green), blue);
	double black = 1 - white;
	
	//-- CMYK --
	double c = (white - red) / white;
	double m = (white - green) / white;
	double y = (white - blue) / white;

	// Print out results
	cout << "Cyan: " << c << endl;
	cout << "Magenta: " << m << endl;
	cout << "Yellow: " << y << endl;
	cout << "Black: " << black << endl;

	return 0;
}