//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_CARDHAND_H
#define BLACKJACK_CARDHAND_H
#include <iostream>
#include "Cards.h"
#include <vector>
using namespace std;
class cardHand {
private:
    vector <Card> hCard;
public:
    void addCard(Card c);
    int getSize ();
    cardHand();
    Card getCardAt (int index);
    void showCard();

    void emptyHand ();
};





#endif //BLACKJACK_CARDHAND_H
