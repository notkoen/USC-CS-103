/* Author: Aaron Kuo
 * Program: digits
 * Class: USC CSCI 103
 * Assignment: Lab 1 Part 2 - Casting, Expressions
 * Description: Converts RGB -> Gets the number of each digit of an user input
 * Additional Info: Coded in Visual Studio Code and compiled/debugged with GCC
 */

#include <iostream>

using namespace std;

int main()
{
	// Declare and initialize variables
	int num;
	int ones;
	int tens;
	int hundreds;
	
	// Prompt the user and obtain input
	cout << "Enter an integer between 0 and 999: ";
	cin >> num;
	
	// Print an empty line because it looks neater and fancier X)
	cout << endl;
	
	// Calculate each digit using modulo
	ones = num % 10;
	tens = (num / 10) % 10;
	hundreds = (num / 100) % 10;
	
	// Print out the digits
	cout << "1's digit is " << ones << endl;
	cout << "10's digit is " << tens << endl;
	cout << "100's digit is " << hundreds << endl;
	
	// End of program
	return 0;
}