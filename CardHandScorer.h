//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_CARDHANDSCORER_H
#define BLACKJACK_CARDHANDSCORER_H

#include "cardhand.h"


class CardHandScorer {
private:
    static int score;
public:
    static int scoreBackJack (cardHand ch);

    void blackJackHand (cardHand ch);
    CardHandScorer();
};


#endif //BLACKJACK_CARDHANDSCORER_H
