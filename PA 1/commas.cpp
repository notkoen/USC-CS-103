/********************************************************
 * Name: Aaron Kuo
 * Email: ankuo@usc.edu
 * Class: USC CSCI 103
 * Assignment: Programming Assignment 1 - Commas
 * Additional Info: Coded in Visual Studio Code and debugged using GCC
 * 
 * Description:
 * Displays a 64-bit integer (long long) with commas for thousands, millions, billions, etc.
 *
 * ** ABSOLUTELY NO ARRAYS, NO `string`, NO `vector` usage is allowed **
 * Instead, you may only declare: bool, int, or int64_t (long long)
 * The only library function allowed is pow(base, exp) defined in the <cmath> library.
 ********************************************************/
#include <iostream>
#include <cmath>
using namespace std;

// Initialize variables
int digits = 0;
int counter = 1;

int print_even(long long digs, long long a)
{
	long long value = a; // Value is used as a placeholder
	long long power = 0;

	for(int j = 0; j < digs; j++)
	{
		if((j+1)%3 != 0 || j == 0)
		{
			power = pow(10, digs - (j+1));
			value = a / power;
			cout << (value % 10);
		}
		else if(j != (digs - 1))
		{
			power = pow(10, digs - (j+1));
			value = a / power;
			cout << (value % 10);
			cout << ",";
		}
		else
		{
			cout << (a%10);
		}
	}
	return 0;
}

int main()
{
	long long input;

	// Prompt user and get input
	cout << "Enter an integer:" << endl;
	cin >> input;

	// If input < 0, print a negative sign so output later 
	if(input < 0)
	{
		cout << "-";
	}

	// Convert input to positive
	input = abs(input);
	digits = log10(input) + 1;
	long long hold = input;

	if(digits%3 != 0 && input != 0)
	{
		for(int i = 0; i < digits % 3; i++)
		{
			hold = input /( pow(10, digits - (i+1)));
			cout << (hold%10);
		}
		if(digits > (digits % 3))
		{
			cout << ",";
		}
	}

	// If input = 0, return 0
	else if(input == 0)
	{
		cout << 0 ;
	}

	print_even(digits - (digits % 3), input);
	cout << endl;

	return 0;
}