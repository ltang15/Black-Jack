//
// Created by tangb on 2/13/2020.
//

#include "cardhand.h"
#include "Cards.h"

using namespace std;

cardHand::cardHand() {}

void cardHand::addCard(Card c)
{
    hCard.push_back (c);
}
int cardHand::getSize ()
{
    return hCard.size();
}
Card cardHand::getCardAt (int index) {
    return hCard.at(index);
}
void cardHand::showCard ()
{
    for (int i=0; i < getSize(); i++)
        cout << getCardAt(i).getCard () << endl;
}
void cardHand::emptyHand ()
{
    if (!hCard.empty())
        hCard.pop_back ();
}