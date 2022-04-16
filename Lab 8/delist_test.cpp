#include <iostream>
#include "delist.h"

using namespace std;

int main()
{
	DEList list;
	
	//Add 1 to the back of the list; Print the front
	list.push_back(1);
	cout << "Added 1 to the list and now front is " << list.front() << endl;
	
	//Remove whatever is in front of the list
	list.pop_front();
	cout << "Removed an item" << endl;
	
	//Add 2 to the front of the list; Print the back
	list.push_front(2);
	cout << "Added 2 to the list and now back is " << list.back() << endl;
	
	//Remove whatever is in the back of the list
	list.pop_back();
	cout << "Removed an item" << endl;
	
	//Add some numbers with the loop
	//Should generate: "24 23 22 21 20 10 11 12 13 14"
	for(int i=0; i<5; i++)
	{
		list.push_back(10+i);
		list.push_front(20+i);
	}
	
	//Print out how many items are in the list
	cout << "List size after adding 10 elements is " << list.size() << endl;
	
	//Maintain loop while list is populated; Pop the front item
	while(!list.empty())
	{
		cout << "Popping front item = " << list.front() << endl;
		list.pop_front();
	}
	
	//Since list is empty, mention that we're popping nothing
	cout << "Attempting to pop an item that doesn't exist" << endl;
	list.pop_front();
	
	cout << "Looking at values from front() and back() of empty list: ";
	cout << list.front() << " " << list.back() << endl;
	
	//Regenerate the list using the same values
	cout << "Repopulating list" << endl;
	for(int i=0; i<5; i++)
	{
		list.push_back(10+i);
		list.push_front(20+i);
	}
	
	//Maintain loop while list is populated; Pop the back item
	while(!list.empty())
	{
		cout << "Popping back item = " << list.back() << endl;
		list.pop_back();
	}
	
	//Since list is empty, mention that we're popping nothing
	cout << "Trying to pop an item that doesn't exist" << endl;
	list.pop_back();

	list.push_back(100);
	list.push_front(101);
	cout << "Goodbye!" << endl;
	return 0;
}