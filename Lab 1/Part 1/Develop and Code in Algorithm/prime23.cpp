/*
 * Name: Aaron Kuo
 * Class: USC CSCI 103
 * Assignment: Lab 1 Part 1 - Algorithms & Control Structures
 * Additional Info: Coded in Visual Studio Code and compiled/debugged with GCC
 */

#include <iostream>
#include <cmath> 

using namespace std;

// Main function
int main() 
{
    //Initialize variables
    int num = 0;      //User entered number
    int two = 0;      //Counter for 2's
    int three = 0;    //Counter for 3's
    
    // Get user input
    cout << "Eneter a positive integer: ";
    cin >> num;

    // Check if the inputted integer does not have 2 or 3 as its factors
    if(num%2 != 0 && num%3 != 0)
    {
        cout << "No" << endl;
    }
    // If the above check is passed, then do the actual calculation
    else
    {
        // Note: Using || instead of && because we just need to check if either works
        // Set the function to loop continuosly while both numbers work
        while(num%2 == 0 || num%3 == 0) 
        {
            // Check factors of 2
            if(num%2 == 0)
            {
                two++;         // Increase the counter by 1
                num = num / 2; // Divide num by the checked factor to continue to count the amount of each factor there is
            }
            else
            {
                three++;
                num = num / 3;
            }
        }
        // If you were to divide the number by the factor, then it should stop when 1 is reached
        // If the final divided number is equal to 1, then that means it can be completely divided by either 2 or 3
        // If the final number is not equal to 1, then that means there are other factors besides 2 and 3
        if(num == 1)
        {
            cout << "Yes" << endl;
            cout << "Twos=" << two;
            cout << " Threes=" << three << endl;
        }
        else
            cout << "No" << endl;
    }

    return 0;
}