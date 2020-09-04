//
// Created by tangb on 2/13/2020.
//

#include "playDriver.h"


void play (player playr, player dealer) {
    Deck d;
    CardHandScorer cs;
    int money = 100;
    int amount;
    char ans;
    d.shuffle();

    if (money > 0) {

        do {
            playr.getHand().emptyHand();
            dealer.getHand().emptyHand();

            cout << "You now have $" << money << ". Place your bet!" << endl;
            cin >> amount;
            if (amount <= money) {
                playerHand(d, playr, cs);
                cout << "---------------" << endl;
                dealerHand(d, dealer, cs);

                if (playr.getScore() == 21 && dealer.getScore() == 21) {
                    cout << "#BlackJack. The game is drawn#" << endl;
                } else {
                    if ((playr.getScore() == 21 && dealer.getScore() != 21)) {
                        cout << "#Player wins. Black Jack#" << endl;
                        money = bet(money, amount, true);

                    } else if (playr.getScore() != 21 && dealer.getScore() == 21) {
                        cout << "#Computer wins. Black Jack#" << endl;
                        money = bet(money, amount, false);
                    } else if ((playr.getScore() < 21) && (playr.getScore() > dealer.getScore())) {
                        cout << "#Player wins#" << endl;
                        money = bet(money, amount, true);
                    } else if ((dealer.getScore() < 21) && (playr.getScore() < dealer.getScore())) {
                        cout << "#Computer wins#" << endl;
                        money = bet(money, amount, false);
                    } else if (dealer.getScore() > 21) {
                        cout << "#Dealer busts.The player wins#" << endl;
                        money = bet(money, amount, true);
                    } else if (playr.getScore() > 21) {
                        cout << "#Player busts. The dealer wins#" << endl;
                        money = bet(money, amount, false);
                    } else if (dealer.getScore() == playr.getScore()) {
                        cout << "#The game is drawn#" << endl;
                    }
                }
            }
            else
                cout << "You do not have enough money" << endl;

             cout << "Do you want to continue? (y/n)" << endl;
             cin >> ans;


        } while (ans == 'y' || ans == 'Y');
    }
    else
        cout << "Not enough money to continue." << endl;
}

int bet (int total, int amount, bool playerWin)
{
    if ( playerWin== true)
        total += amount;
    else if  (playerWin == false)
        total -= amount;
    else
        total = total;
    return total;

}