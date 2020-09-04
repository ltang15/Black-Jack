//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_CARDS_H
#define BLACKJACK_CARDS_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Card {
private:
    int suit;
    int value;
public:
    string values [13] = {"Ace", "Two","Three", "Four", "Five", "Six", "Seven", "Eight", "Nine","Ten","Jack", "King", "Queen"};
    string suits[4] = {"Hearts", "Spades", "Diamonds", "Clubs"};
    void setSuit(int suit);
    void setValue(int value);
    int getSuit();
    int getValue();
    Card (int suit, int value);
    string getCard();
    Card();

};


#endif //BLACKJACK_CARDS_H
