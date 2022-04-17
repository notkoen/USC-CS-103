/*
 * Name: Aaron Kuo
 * Class: USC CSCI 103
 * Assignment: Lab 1 Part 2 - ASCII Art
 * Description: Print triangles using asterisks given user inputted angle
 * Additional Info: Coded in Visual Studio Code and compiled/debugged with GCC
 */

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	// Initialize variables
	int height = 30;
	double length = 0;
	int angle = 0;
	
	// Get user input
	cout <<"Please enter angle theta in degrees (Between 15 to 75): ";
	cin >> angle;
	
	// Convert user input angle into radians because <cmath> runs off of radians
	length = tan(angle * (M_PI / 180.0));
	
	// K will be used as the length of each row
	// so K may have differing values after each loop after it checks if the length of each row is [20, 30] 
	int k = 0;
	
	// First "for" loop is set to loop for the height of the entire triangle
	for(int i = 0; i < height; i++)
	{
		// This "for" loop prints how many asterisks there are for each line
		// The loop is determined by K, which is set later depending on if the length of the row is within [20, 30]
		for(int j = 0; j < k; j++)
		{
			cout << "*";
		}
		cout << endl;
		
		// Checks if the amount of asterisks in the row is within [20, 30], which then changes the value of K
		// K is used as the limit for the printing loops above
		if(20 <= floor(i*length) && floor(i*length) <= 30)
		{
			k = 20;
		}
		else
		{
			k = floor(i*length);
		}
	}
}