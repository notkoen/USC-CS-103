/********************************************************
 * Name: Aaron Kuo
 * Email: ankuo@usc.edu
 * Class: USC CSCI 103
 * Assignment: Programming Assignment 1 - Hailstats
 * Additional Info: Coded in Visual Studio Code and debugged using GCC
 ********************************************************/

#include <iostream>
#include <cmath>
using namespace std;

//===============
// EXTERNAL FUNCTIONS
//===============
int find_length(int num)
{
    int length = 0;
    while (num != 1)
    {
        if (num % 2 == 0)
        {
            num /= 2;
        }
        else
        {
            num = num*3 +1;
        }
        length++;
    }
    return length;
}

//===============
// MAIN FUNCTION
//===============
int main()
{
    int start;
    int end;
    int min_l = -1;
    int max_l = -1;
    int min_n;
    int max_n;

    // Get user input
    cout << "Enter the range that you want to search: ";
    cin >> start >> end;

    if(start <= end)
    {
        for(int i = start; i < end + 1; i++)
        {
            int len = find_length(i); 
            if (min_l == -1 || len < min_l)
            {
                min_l = len;
                min_n = i;
            }
            if (len > max_l)
            {
                max_l = len;
                max_n = i;
            }
        }
    }
    else
    {
        cout << "Invalid range";
        return 0;
    }

    // Print out outputs 
    cout << "Minimum length: " << min_l << endl;
    cout << "Achieved by: " << min_n << endl;
    cout << "Maximum length: " << max_l << endl;
    cout << "Achieved by: " << max_n << endl;

    // End of function
    return 0;
}