//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - test2.cpp
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "bigint.h"
#include <iostream>
using namespace std;

// Extra test - Expected output:  10000000000000000000000
int main() {
	BigInt a("1234567890123456789012");
	BigInt b("8765432109876543210988");
	
	a.add(b);
	cout << a.to_string() << endl;
	
	return 0;
}