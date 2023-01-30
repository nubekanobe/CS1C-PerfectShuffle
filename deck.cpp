#include "deck.h"

Deck::Deck() {

  for (int i = 0; i < 52; i++) {
    cards[i].setCard(i);
  }

  shuffleCount = 0; 
}

void Deck::printDeck()const {

    cout << '['; 

  for (int i = 0; i < 52; i++) {
    cards[i].printCard();

    if (i < 51)
      cout << ", ";
  }

  cout << ']' << endl << endl; 
}

void Deck::shuffleDeck() {

    Card tempDeckLow[26]; 
    Card tempDeckHigh[26];

    for (int i = 0; i < 26; i++)
    {
        tempDeckLow[i] = cards[i]; 
    }

    for (int i = 0; i < 26; i++)
    {
        tempDeckHigh[i] = cards[i + 26];
    }

    int j = 0; // variable to navigate temp deck low
    int k = 0; // variable to navigate temp deck high

    for (int i = 0; i < 52; i++) // loop through entire deck 
    {
      
        if (i % 2 == 0)         
        {
            cards[i] = tempDeckLow[j]; 

            j++; // controls low Deck index

        }

        if (i % 2 == 1)
        {
            cards[i] = tempDeckHigh[k];

            k++; // controls high Deck index

        }

    }

    shuffleCount++; 
}


bool Deck::compareDecks(Deck& deck)const {

    for (int i = 0; i < 52; i++) {

        if (cards[i].getRank() != deck.cards[i].getRank() || cards[i].getSuit() != deck.cards[i].getSuit())
            return false; // returns false immediately on mismatch

    }

    return true; // if there are no mismatches, return true 

}


int Deck::getShuffleCount()const {

    return shuffleCount; 
}

