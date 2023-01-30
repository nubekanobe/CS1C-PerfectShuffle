#include <iostream> 
#include "card.h"

using namespace std; 

 

#ifndef DECK
#define DECK



class Deck{

private: 

	Card cards[52]; 

	int shuffleCount; 


public: 

	Deck(); 

	void printDeck()const; 

	void shuffleDeck(); 

	bool compareDecks(Deck& deck)const; 

	int getShuffleCount()const; 
	
};


#endif 