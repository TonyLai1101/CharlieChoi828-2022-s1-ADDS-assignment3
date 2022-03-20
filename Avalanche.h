#ifndef AVALANCHE_H
#define AVALANCHE_H
#include "Computer.h"
#include <iostream>
using namespace std;

class Avalanche: public Computer
{
    public:
        Avalanche();
        virtual char makeMove();
};

#endif