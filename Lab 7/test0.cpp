//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - test0.cpp
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "bigint.h"
#include <iostream>
using namespace std;

int main() {
    BigInt myInt("103");
    cout << myInt.to_string() << endl;
    return 0;
}