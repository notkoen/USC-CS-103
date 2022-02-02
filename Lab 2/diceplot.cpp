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

//===============
// EXTERNAL FUNCTIONS
//===============
// Roll function => Generate a number between 1 and 6
int roll()
{
    int r = rand() % 6 + 1;
    return r;
}

// Print Histogram Function => Prints the histogram of sums and occurences
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

//===============
// MAIN FUNCTION
//===============
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
    //FIX - IDK why this doesnt  work. Program will still work as is but a cheap workaround LOL
    //cout << "How many dices per roll? ";
    //cin >> dices;

    // Repeat each set of rolls by the user input
    for(int i = 0; i < input; i++)
    {
        //TODO - Incoporate a better way of repeating dice rolls per set
        int total = roll() + roll() + roll() + roll();

        // Allow user to input how many dices per set then loop roll per 
        //for(int k = 0; k < dices; k++)
        //{
        //    total = total + roll();
        //}

        // Use total to increment the corresponding array index
        sums[total - 4]++;
    }

    // Print results
    printHistogram(sums);
}

//===============
// TEST FUNCTIONS
//===============
//DEBUG - Test roll function for basic idea on how it works
//for(int a = 0; a < 10; a++)
//{
//    cout << roll() <<endl;
//}

//DEBUG - Seen on codio
//int testCounts[21];           // 21 options of sum of 4 dice => [4,24]
//for (int i=0; i<21; i++)
//    testCounts[i] = i/2;      // Fill the array
//printHistogram(testCounts);   // Call your method