//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - badaccess.cpp
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "bigint.h"
#include <iostream>
using namespace std;

int main() {
    BigInt a("13");
    int foo = a.v[0];
    cout << foo << endl;
    return 0;
}