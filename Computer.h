#ifndef COMPUTER_H
#define COMPUTER_H
#include "Player.h"
#include <iostream>
using namespace std;

class Computer: public Player
{
    public:
        Computer();
        virtual char makeMove();
};

#endif