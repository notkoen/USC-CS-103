/********************************************************
 * Name: Aaron Kuo
 * Email: ankuo@usc.edu
 * Class: USC CSCI 103
 * Assignment: Programming Assignment 1 - Hailstone
 * Additional Info: Coded in Visual Studio Code and debugged using GCC
 ********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	// Declare variables
	int length = 0;
	int input;

	// Obtain User input
	cout << "Enter a number: ";
	cin >> input;
	cout << endl; // Print a line for clarity

	// While loop to calculate until the number reaches 1
	while(input != 1)
	{
		// Check if input is even
		if(input % 2 == 0)
		{
			input /= 2;
			cout << input << " ";
		}
		// If not even then do the calculation
		else
		{
			input = (input * 3) + 1;
			cout << input << " ";
		}
		// Increase the length
		length++;
	}

	// Print the results
	cout << "Length: " << length << endl;
}