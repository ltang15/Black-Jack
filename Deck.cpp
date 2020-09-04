//
// Created by tangb on 2/13/2020.
//


#include "Deck.h"
#include "Cards.h"

Deck::Deck()
{
    reset();
}
void Deck::reset()
{
    int count =0;
    for (int i=0; i <4; i++)
        for (int j=0; j<13; j++)
            cards[count++] = Card(i,j);
}
void Deck::printDeck()
{

    for(int i =0; i <52; i++) {

        cout << cards[i].getCard() << endl;
    }

}
void Deck::shuffle()
{
    int random = 0, temp = 0;
    for( int i=0; i<52; i++)
    {
        random = rand()%52;
        cards[temp] = cards[i];
        cards[i] = cards[random];
        cards[random] = cards[temp];
    }
}
Card Deck::getNextCard()
{
    if(nextIndex > 51)
        return Card();
    return cards[nextIndex++];

}

void Deck::dealCard()
{
    for (int i=0; i<52; i++)
        cout << getNextCard().getCard() << endl;
}
