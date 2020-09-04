//
// Created by tangb on 2/13/2020.
//
#include "dealerDriver.h"
void dealerHand (Deck& d, player& p2, CardHandScorer cs)
{
    cout << "**Dealer hand:" << endl;

    cout << "First card is: " << endl;
    p2.addCard(d.getNextCard());
    p2.showCard();
    p2.addCard(d.getNextCard());


    while (cs.scoreBackJack(p2.getHand()) <= 17)
    {
        cout << "*Dealer hits*" << endl;
        p2.addCard(d.getNextCard());
    }
    cout << "-- Show cards" << endl;
    p2.showCard();
    cs.scoreBackJack(p2.getHand());
    cout << "- Score is: ";
    cs.blackJackHand(p2.getHand());
}

