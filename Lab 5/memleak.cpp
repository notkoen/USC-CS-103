/*
 * Name: Aaron Kuo
 * Class: USC CSCI 103
 * Assignment: CSCI 103L Lab 5 (Memleak.cpp)
 * Additonal Info: Coded in VSC and debugged with GCC
 */

#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

//Calculate the sum of an array
int test1(int *data, int len)
{
    int sum = 0;
    //for(int i = 0; i <= len; i++)
    //i <= len will result in array out of bounds issue as arrays start at index 0
    //Having = will result in accessing past the length of array
    for(int i = 0; i < len; i++)
    {
        sum += data[i];
    }
    return sum;
}

//Allocate a random number array
char* test2_init(int len)
{
    char buf[80];
    cout << "Enter a word: ";
    cin >> buf;
    char* mydat = new char[strlen(buf)+1];
    strcpy(mydat, buf);
    return mydat;
}

char* test2_reverse(char* word)
{
    int len = strlen(word);
    char* otherword = new char[len+1];
    
    for(int i=0; i < strlen(word); i++)
    {
        otherword[i] = word[len-i-1];
    }
    //otherword[len+1] = '\0';
    //Using len + 1 goes beyond the array
    otherword[len] = '\0';
    //delete [] word;
    //Commented out since main already does this
    return otherword;
}

int main(int argc, char* argv[])
{
    if(argc < 2)
    {
        cerr << "Please enter the test number you want to run [1-2]" << endl;
        return 1;
    }
    const int len = 7;
    int test = atoi(argv[1]);
    
    if(test == 1)
    {
        // Test should sum up the array values and print it
        //int *data = new int[len];
        //No need for a pointer above
        int data[len];
        for (int i=0; i < len; i++)
        {
            data[i] = rand()%100;
        }
        int sum = test1(data, len);
        cout << "Test 1 sum is " << sum << endl;
    }
    
    else if(test == 2)
    {
        // Test should create a random string & then reverse a copy
        char* myword = test2_init(len);
        cout << "My word is: " << myword << endl;
        
        char* otherword = test2_reverse(myword);
        cout << "The other word is: " << otherword << endl;
        
        delete [] myword;
        delete [] otherword;
    }
    else
    {
        cout << "Unknown test number" << endl;
    }

    return 0;
}
