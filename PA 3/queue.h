//========================================
// Name: Aaron Kuo
// Class: USC CSCI 103L
// Assignment: PA 3 - queue.h
// Date: 3/17/2022
// Additional Info: Coded in VSC and debugged using GCC
//----------------------------------------
#ifndef QUEUE_H
#define QUEUE_H

// e.g. position [3][5] in an array would have row 3, col 5
struct Location {
    int row;
    int col;
};

// a class that contains a series of Locations
class Queue {
    public: // PI:
    
    //Constructor. maxlen must be as large as the total number
    //of Locations that will ever be entered into this Queue.
    Queue(int maxlen);
    
    //Destructor. Releases resources. C++ will call automatically.
    ~Queue();
    
    //Insert a new Location at the end/back of our list
    void add_to_back(Location loc);

    //Return & "remove"  oldest Location not already extracted
    Location remove_from_front();

    //Is Queue empty?
    bool is_empty();

    //Member variables of Queue; For implementation:
    private:
    Location* contents; // ptr to dynamically-allocated array
    int tail;           // how many Locations were added so far?
                        // (index of next free item at the end)
    int head;           // how many Locations were extracted so far?
                        // (index of the first occupied location)
};

#endif