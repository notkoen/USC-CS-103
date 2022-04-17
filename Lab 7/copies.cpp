//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: Lab 7 - copies.cpp
// Date: 3/26/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "bigint.h"
#include <iostream>
using namespace std;

int main()
{
	BigInt A("15");
	BigInt B(A);
	BigInt C = A;
	A.add(B);
	cout << A.to_string() << endl;
	cout << B.to_string() << endl;
	cout << C.to_string() << endl;
}