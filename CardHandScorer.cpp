//
// Created by tangb on 2/13/2020.
//

#include "CardHandScorer.h"
#include "Cards.h"


CardHandScorer::CardHandScorer() {}

int CardHandScorer::scoreBackJack (cardHand ch)
{

    int sum = 0;
    int numberOfAce =0;
    for (int i=0; i < ch.getSize(); i++)
    {
        int value = ch.getCardAt(i).getValue ();
        if (value == 0 )
        {
            numberOfAce += 1;
            sum += 1;
        }
        else if ( value == 10 || value == 11 || value == 12 )
        {
            sum += 10;
        }
        else
            sum += (value +1);
    }
    for ( int j = 0; j < numberOfAce; j++)
    {
        if (sum < 12)
            sum += 10;
    }

    return sum;
}
void CardHandScorer::blackJackHand (cardHand ch)
{
    cout << CardHandScorer::scoreBackJack(ch) << endl;

}