/********************************************************
 * Name: Aaron Kuo
 * Class: USC CS 103
 * Email: ankuo@usc.edu
 * Assignment: Programming Assignment 1 - Abundant
 * Additional Info: Coded in Visual Studio Code and debugged with GCC
 *
 * Description:
 * Displays the top 3 most "abundant" (see writeup)
 * numbers in the input sequence.  The input sequence
 * is assumed to be valid natural numbers separated
 * by spaces and ending with 0.
 *
 * ABSOLUTELY NO ARRAY or `string`/`vector`/etc. usage
 * is allowed!
 *
 * You may only declare: bool, int, or unsigned int
 * No library functions (beyond cin/cout) are allowed.
 *
 * You may NOT modify any of the given template code.
 * This ensures our automated checkers can parse your
 * output.  Failure to follow this direction will lead
 * to a score of 0 on this part of the assignment.
 ********************************************************/

#include <iostream>
using namespace std;

int main()
{
    // n1 is the number with the highest abundance, a1
    // n2 is the number with the 2nd-highest abundance, a2
    // n3 is the number with the 3rd-highest abundance, a3
    unsigned int n1 = 0, n2 = 0, n3 = 0;
    int a1 = 0, a2 = 0, a3 = 0;

    // num_abundant counts how many numbers in the input sequence are abundant
    int num_abundant = 0;

    // Prompt the user on what is happening / what to do
    cout << "Enter a sequence of natural numbers, separated by spaces, " << endl << "and ending with 0."<< endl;

    // Obtain user input:
    int input;
    cin >> input;

    // Set the loop on the condition that input is not equal to 0
    while(input != 0) 
    {
        // Determine if the input is abundant
        // Integer sum is the sum of all the factors of the number
        int sum = 0; 
        for(int i = 1; i < input; i++) 
        {
            if (input % i == 0)
            {
                sum = sum + i; 
            }
        }

        // Check if sum of all  factors is larger than the number
        if(sum > input)
        {
            // If larger, increase the number of abundant numbers
            num_abundant++;

            // Determine the ranking of the abundant number
            if(sum > a1) // Compare to top rank
            {
                // If sum > highest one, replace values
                n3 = n2;
                a3 = a2;

                n2 = n1;
                a2 = a1;

                n1 = input;
                a1 = sum;
            }
            else if(sum > a2) // Compare to second highest
            {
                n3 = n2;
                a3 = a2;

                n2 = input;
                a2 = sum;
            }
            else if(sum > a3) // Compare to third highest
            {
                n3 = input;
                a3 = sum;
            }
            // If sum is not higher than any of the others then just skip it and restart the loop
        }
    cin >> input;
    }

    // Print out results
    cout << "Abundant number count: " << num_abundant << endl;
    cout << "Top 3 most abundant numbers: " << endl;
    cout << n1 << " : " << a1 << endl;
    cout << n2 << " : " << a2 << endl;
    cout << n3 << " : " << a3 << endl;

    // End of the program
    return 0;
}