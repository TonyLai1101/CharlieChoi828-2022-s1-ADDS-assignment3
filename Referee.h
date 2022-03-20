#ifndef REFEREE_H
#define REFEREE_H
#include "Player.h"
#include <iostream>
using namespace std;

class Referee
{
    public:
        Referee();
        char refGame(Player* player1, Player* player2); 
};

#endif