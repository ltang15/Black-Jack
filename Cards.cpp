//
// Created by tangb on 2/13/2020.
//

#include "Cards.h"


using namespace std;
Card::Card(){}

Card::Card(int suit, int value)
{
    setSuit(suit);
    setValue(value);

}
string Card::getCard()
{
    string cardValue;
    cardValue = values[value] + " of " + suits[suit];
    return cardValue;
}

int Card::getSuit()
{
    return suit;
}
int Card::getValue()
{
    return value;
}
void Card::setSuit(int suit)
{
    this -> suit = suit;

}
void Card::setValue(int value) {
    this->value = value;
}
