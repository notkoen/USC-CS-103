//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - test1.cpp
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "bigint.h"
#include <iostream>
using namespace std;

int main() {
    BigInt a("13");
    BigInt b("42");
    b.add(a); // increase b by a
    cout << b.to_string() << endl; // prints 55
    b.add(a); // increase b by a
    cout << b.to_string() << endl; // prints 68
    return 0;
}