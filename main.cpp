#include "deck.h"

int main() {

  Deck initDeck; // deck to shuffle

  Deck ogDeck; // original deck to compare  

  cout << "Original deck: " << endl; 

  initDeck.printDeck(); 

  initDeck.shuffleDeck();

  cout << "Deck after 1st perfect shuffle: " << endl; 

  initDeck.printDeck(); 
 
 do  {

	  initDeck.shuffleDeck(); // shuffle deck at least once

 } while (!initDeck.compareDecks(ogDeck)); // continue until shuffled deck matches original deck

  cout << "Shuffle Count: " << initDeck.getShuffleCount() << endl;

  return 0; 
}