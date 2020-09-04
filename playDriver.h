//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_PLAYDRIVER_H
#define BLACKJACK_PLAYDRIVER_H
#include <iostream>
#include "playerDriver.h"
#include "dealerDriver.h"
#include "cardhand.h"

#include "player.h"
using namespace std;
void play (player playr, player dealer);
int bet (int total, int amount, bool playerWin);
#endif //BLACKJACK_PLAYDRIVER_H
