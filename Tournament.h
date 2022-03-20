#ifndef TOURNAMENT_H
#define TOURNAMENT_H
#include "Player.h"
#include "Referee.h"
#include <array>
#include <iostream>
using namespace std;

class Tournament
{
    public:
        Tournament();
        Player * run(array<Player *, 8>  competitors);
};

#endif