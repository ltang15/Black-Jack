//
// Created by tangb on 2/13/2020.
//

#include "playerDriver.h"
#include "player.h"
char Choice ()
{
    char ans;
    cout << "Hit (H) or Stand (S) ?"  << endl;
    cin >> ans;
    return ans;
}

void playerHand (Deck& d, player& p1, CardHandScorer cs)
{
    cout << "**Player hand:" << endl;
    for (int i = 0; i <2; i++)
    {
        p1.addCard(d.getNextCard());

    }
    p1.showCard();
    p1.setScore(cs.scoreBackJack(p1.getHand())) ;
    cout << "- Score is: ";

    cs.blackJackHand(p1.getHand());
    char choice;
    do
    {
        choice = Choice();

        if (choice == 'h' || choice == 'H') {
            p1.addCard(d.getNextCard());
            p1.showCard();
            p1.setScore(cs.scoreBackJack(p1.getHand()));
            cout << "New score is: ";
            cs.blackJackHand(p1.getHand());
        }

    }

    while (choice == 'h' || choice == 'H');
    {
        cout << "- Score is: ";
        cs.blackJackHand(p1.getHand());
    }
}