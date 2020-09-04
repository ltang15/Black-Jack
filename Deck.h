//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_DECK_H
#define BLACKJACK_DECK_H
#include "Cards.h"

class Deck {

    private:
        const int DECK_SIZE = 52;// this is the size of your deck
        Card cards[52];// this is your final deck of cards
        int nextIndex =0;

    public:

        Card getNextCard(); // returns the next card in the deck
        void shuffle(); // puts cards in random order
        void printDeck();
        void reset();
        Deck(); // this is the constructor
        void dealCard();





};


#endif //BLACKJACK_DECK_H
