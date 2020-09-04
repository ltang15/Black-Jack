#include <iostream>
#include <cstdlib>
#include <ctime>
#include "playerDriver.h"
#include "dealerDriver.h"
#include "playDriver.h"


int main() {
    srand(time(NULL));
    Deck d;
    player p1,c;
    cout << "Black Jack. Game Start!" << endl;
    d.shuffle();
    play(p1, c);

    return 0;
}