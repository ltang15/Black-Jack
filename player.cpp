//
// Created by tangb on 2/13/2020.
//

#include "player.h"

#include "cardhand.h"

player::player (){}

void player::setScore(int score)
{
    this->score = score;
}
int player::getScore()
{
    return score;
}
void player::addCard(Card c)
{
    ch.addCard(c);
}
void player::showCard()
{
    ch.showCard();
}
cardHand player::getHand()
{
    return ch;
}