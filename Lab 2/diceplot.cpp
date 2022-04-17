/********************************************************
 * Name: Aaron Kuo
 * Class: USC CSCI 103
 * Email: ankuo@usc.edu
 * Assignment: Lab 2 - Diceplot
 * Additional Info: Coded in Visual Studio Code and debugged with GCC
 *
 * Description:
 * Simulate 4 dice rolls and store the sum of each in a array of sums
 * Print out the results in a histogram afterwards
 ********************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

// Roll function => Generate a number between 1 and 6
int roll()
{
	int r = rand() % 6 + 1;
	return r;
}

// Print Histogram Function
void printHistogram(int counts[])
{
	// Because min = 4 and max = 24, only need to loop 20 times
	for(int i = 0; i <= 20; i++)
	{
		// Because min = 4, neet to offset by 4
		cout << i + 4 << " : ";
		// Print the number of x's
		for(int j = 0; j < counts[i]; j++)
		{
			cout << "x";
		}
		cout << endl;
	}
}

int main()
{
	srand(time(0));
	
	// Declare variables
	int sums[21] = {};
	int input;
	int dices;
	int total = 0;
	
	// Obtain user input
	cout << "How many rolls do you want? ";
	cin >> input;
	
	// Repeat each set of rolls by the user input
	for(int i = 0; i < input; i++)
	{
		int total = roll() + roll() + roll() + roll();
		
		// Use total to increment the corresponding array index
		sums[total - 4]++;
	}
	// Print results
	printHistogram(sums);
}