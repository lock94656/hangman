#include <iostream>
#include "display.h"

// defines function that print the hangman
void printHangman(int nberrors)
{
	switch (nberrors)
	{
		case 1 :
			std::cout<<std::endl;
			std::cout<<std::endl;
			std::cout<<std::endl;
			std::cout<<"__"<<std::endl;
			break;
		
		case 2 :
			std::cout<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<" _|_"<<std::endl;
			break;
		
		case 3 :
			std::cout<<"  T "<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<" _|_"<<std::endl;
			break;
		
		case 4 :
			std::cout<<"  T~~~"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<" _|_"<<std::endl;
			break;
		
		case 5 :
			std::cout<<"  T~~~!"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<"  |"<<std::endl;
			std::cout<<" _|_"<<std::endl;
			break;
		
		case 6 :
			std::cout<<"  T~~~!"<<std::endl;
			std::cout<<"  |   *"<<std::endl;
			std::cout<<"  |   "<<std::endl;
			std::cout<<" _|_  "<<std::endl;
			break;
		
		case 7 :
			std::cout<<"  T~~~!"<<std::endl;
			std::cout<<"  |  -*-"<<std::endl;
			std::cout<<"  |   "<<std::endl;
			std::cout<<" _|_  "<<std::endl;
			break;
		
		case 8 :
			std::cout<<"  T~~~!"<<std::endl;
			std::cout<<"  |  -*-"<<std::endl;
			std::cout<<"  |   0"<<std::endl;
			std::cout<<" _|_  "<<std::endl;
			break;
		
		case 9 :
			std::cout<<"  T~~~!"<<std::endl;
			std::cout<<"  |  -*-"<<std::endl;
			std::cout<<"  |   0"<<std::endl;
			std::cout<<" _|_ / \\ "<<std::endl;
			break;
		
		default : 
			std::cout<<""<<std::endl;
			break;
	}
}

// defines function that print word with discovered letters
void printWord(char* letterArray, bool* hidenLetterArray, int nbchar)
{
	std::cout<<"The word to find is :";
	for(int l=0; l<nbchar; l++)
	{
		if(*(hidenLetterArray+l)==true)
			std::cout<<"_";
		else
			std::cout<<*(letterArray+l);
	}
	std::cout<<std::endl;
}



