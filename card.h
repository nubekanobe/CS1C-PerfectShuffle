#include <iostream>

using namespace std;

#ifndef CARD
#define CARD

enum Rank{TWO = 2, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN, JACK, QUEEN, KING, ACE};

enum Suit{SPADES, HEARTS, CLUBS, DIAMONDS};

class Card {

private:
  
	Rank rank;

	Suit suit;

public:
  
	Card();

	void setCard(int i);

	void printCard()const;

	bool compareCard(Card card)const; 

	Rank getRank()const; 

	Suit getSuit()const; 
};

#endif