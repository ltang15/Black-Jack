//
// Created by tangb on 2/13/2020.
//

#ifndef BLACKJACK_PLAYER_H
#define BLACKJACK_PLAYER_H


#include <vector>
#include "cardhand.h"
#include "CardHandScorer.h"

using namespace std;
class player {
private:
    vector <Card> hCard;
    int score;
public:
    cardHand ch;

    void addCard(Card c);
    void showCard();
    player ();
    void setScore(int score);
    int getScore();
    cardHand getHand();
};


#endif //BLACKJACK_PLAYER_H
