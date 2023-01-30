#include "card.h"


Card::Card() {

    rank = TWO; 

    suit = SPADES;

}


void Card::printCard()const {

    switch (rank) {    // structure to print rank

    case JACK:        // prints character rank if face card
        cout << 'J';
        break;

    case QUEEN:
        cout << 'Q';
        break;

    case KING:
        cout << 'K';
        break;

    case ACE:
        cout << 'A';
        break;

    default: 
        cout << rank; // prints numerical rank if not a face card
    }

    switch (suit) {   // structure to print suit

    case SPADES: 
        cout << 'S';
        break; 

    case HEARTS: 
        cout << 'H'; 
        break; 

    case CLUBS: 
        cout << 'C'; 
        break;

    case DIAMONDS:
        cout << 'D'; 
        break; 
    }
}

void Card::setCard(int i) { 

  //int rankLoop = i % 13 + 2; // lowest value = 2, highest value = 14

  rank = static_cast<Rank>(i % 13 + 2);

  if (i <= 12) // 13 cards per suit 
    suit = SPADES;

  else if (i <= 25)
    suit = HEARTS;

  else if (i <= 38)
    suit = CLUBS;

  else if (i <= 51)
    suit = DIAMONDS;

}



bool Card::compareCard(Card card)const {

    return (rank == card.rank) && (suit == card.suit); 

}


Rank Card::getRank()const {

    return rank;
}

Suit Card::getSuit()const {

    return suit;
}