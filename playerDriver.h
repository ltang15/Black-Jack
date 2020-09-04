//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_PLAYERDRIVER_H
#define BLACKJACK_PLAYERDRIVER_H
#include <iostream>
#include "Deck.h"
#include "Cards.h"
#include "cardHand.h"
#include "CardHandScorer.h"
#include "player.h"


using namespace std;


char Choice ();
void playerHand (Deck& d, player& p1, CardHandScorer cs);
#endif //BLACKJACK_PLAYERDRIVER_H
