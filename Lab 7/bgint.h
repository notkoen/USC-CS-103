//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - bigint.h
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include <string>
#include <vector>

// Importing whole namespace in header is bad; This will let us write 'string'/'vector' below
using std::string;
using std::vector;

class BigInt {
    public:
        BigInt(string s, int b = 10); //Convert string to BigInt
        string to_string(); //Get string representation
        void add(BigInt foo); //Add another BigInt to this one
        string Decimal(string str, int b); //Converts number to base ten
    private:
        string num;
        vector<int> v;
        int base;
};