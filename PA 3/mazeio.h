//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: PA 3 - mazeio.h
// Date: 3/17/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#ifndef MAZEIO_H
#define MAZEIO_H

//Read maze from given filename, allocate & return maze 2D array,
//Fill in rows and columnss
char** read_maze(char* filename, int* rows, int* cols);

//Print maze to cout
void print_maze(char** maze, int rows, int cols);

#endif