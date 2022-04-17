/*
 * Name: Aaron Kuo
 * Class: USC CSCI 103
 * Assignment: CSCI 103L Lab 5 (Scramble.cpp)
 * Additonal Info: Coded in VSC and debugged with GCC
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>
#include <fstream> //For reading files

using namespace std;

// Scramble the letters of this string randomly
void permute(char items[], int len);

// Delete the array below and replace by reading in words from a file in main()
const int numWords = 10;

int main(int argc, char* argv[])
{
	srand(time(0));
	char guess[80];
	
	bool wordGuessed = false;
	int numTurns = 10;
	
	int numWords;
	
	//Check if input has the correct amount of arguments
	if(argc < 2)
	{
		cout << "Usage: ./scramble <input file>" << endl;
		return -1;
	}
	
	//Use ifstream to load up file specified by launch params
	ifstream file(argv[1]);
	
	//Check if file exists, if not then warn the user
	if(file.fail())
	{
		cout << "File provided does not exist. Please try again." << endl;
		file.clear();
		return -1;
	}
	
	//Check if file specifies number of words in first line, if not then warn the user
	file >> numWords;
	if(file.fail())
	{
		cout << "Number of words not specified." << endl;
		return -2;
	}
	
	char** wordBank = new char*[numWords];
	char w[50];
	int wlen = 0;
	
	//takes in exactly the number of words specified
	//words separated by whitespace
	for(int i = 0; i < numWords; i++)
	{
		file >> w;
		wlen = strlen(w);
		wordBank[i] = new char[wlen+1];
		strncpy(wordBank[i], w, wlen+1);
	}
	
	//Once we are done, stop reading the file
	file.close();
	
	//Pick a random word from the wordBank
	int target = rand() % numWords;
	int targetLen = strlen(wordBank[target]);
	
	//Make a dynamically-allocated copy of the word and scramble it
	char* word = new char[targetLen+1];
	strcpy(word, wordBank[target]);
	permute(word, targetLen);
	
	// An individual game continues until a word
	//  is guessed correctly or 10 turns have elapsed
	while(!wordGuessed && numTurns > 0)
	{
		cout << "Scrambled word: " << word << endl;
		cout << "What do you think the unscrambled word is?" << endl;
		cin >> guess;
		
		wordGuessed = (strcmp(wordBank[target],guess) == 0);
		
		numTurns--;   // Every guess counts as a turn
	}
	if(wordGuessed)
	{
		cout << "You win!" << endl;
	}
	else
	{
		cout << "Too many turns...You lose!" << endl;
	}
	
	//Free up any necessary memory
	delete [] word;
	
	//Delete the arrays within
	for(int i = 0; i < numWords; i++)
	{
		delete [] wordBank[i];
	}
	
	delete [] wordBank;
	return 0;
}

// Scramble the letters. See "Knuth shuffle"
void permute(char items[], int len)
{
	for(int i = len-1; i > 0; --i)
	{
		int r = rand() % i;
		char temp = items[i];
		items[i] = items[r];
		items[r] = temp;
	}
}
