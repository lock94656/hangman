#include <iostream>
#include <cstring>
#include <fstream>
#include "display.h"


#define NB_MAX_ERRORS 9

int main(int argc, char** argv)
{
	std::cout<<"--------------------HANGMAN GAME--------------------"<<std::endl;
	
	// opens input file containing mystery word
	std::ifstream inputFile("../data/MysteryWord.txt");
	if (!inputFile)
	{
		std::cout<<"[ERROR] Could not open file containing the mystery word!"<<std::endl;
		return 1;
	}
	
	// gets the mystery word
	char word[30];
	inputFile >> word;
	
	// estimates number of chars of the word		
	int nbChars = strlen(word);
	
	// creates array to store discoverd letters
	bool hiddenLetters[nbChars]; 
	
	//initialises the array with true values
	for(int l=0; l<nbChars; l++)
		hiddenLetters[l] = true;
		
	// initialises main loop variables
	bool isWordDiscovered = false;
	int nbLettersRecognised = 0;
	int nbErrors =0;
	bool isRunning = true;
	
	// launchs main loop
	while(isRunning)
	{
		// gets new input from player
		bool isLetterDiscovered = false;
		char letter;
		std::cout<<"========================="<<std::endl;
		std::cout<<"Please input a letter..."<<std::endl;
		std::cin >> letter;
		
		// checks if the input character is in the mystery word
		for(int l =0; l<nbChars; l++)
		{
			if(word[l]==letter)
			{
				if (hiddenLetters[l])
				{
					hiddenLetters[l]=false;
					nbLettersRecognised++;
					isLetterDiscovered = true;
				}
				else
				{
					isLetterDiscovered = true;
					std::cout<<"This letter has already been recognised"<<std::endl;
				}
			}
		}
		
		// prints discovered letters
 		printWord(word, hiddenLetters, nbChars);
		
		// increments the number of errors (if it is the case)
		if(!isLetterDiscovered)
			nbErrors++;
		
		// displays the hangman
		printHangman(nbErrors);
		
		// checks if all the letters were discovered
		if(nbLettersRecognised == nbChars)
			isWordDiscovered = true;
		
		// checks if the number of errors exceed the maximun number of errors
		if (nbErrors>=NB_MAX_ERRORS || isWordDiscovered)
			isRunning = false;
	}
	
	// print final result
	if (isWordDiscovered)
	{
		std::cout<<"CONGRATULATION !!! YOU WIN !!! :)"<<std::endl;
	}
	else
	{
		std::cout<<"YOU LOSE !!! :( "<<std::endl;
		std::cout<<"TRY AGAIN"<<std::endl;
	}
		
	return 0;
}