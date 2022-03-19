//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: PA 3 - queue.cpp
// Date: 3/17/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#include "queue.h"

//Constructor. Maxlen must be as large as the total number
//of Locations that will ever be entered into this Queue.
Queue::Queue(int maxlen) {
    contents = new Location[maxlen];
    head = 0;
    tail = 0;
}

//Destructor. releases resources. C++ will call automatically.
Queue::~Queue() {
    delete[] contents;
}

//Insert new Location @ end/back of  list
void Queue::add_to_back(Location loc) {
    tail++;
    contents[tail] = loc;
}

//Return & "remove" oldest Locations not already extracted
Location Queue::remove_from_front() {
    head++;
    return contents[head];
}

//Is Queue empty?
bool Queue::is_empty() {
    return head == tail;
}
