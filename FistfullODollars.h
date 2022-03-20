#ifndef FISTFULL0DOLLARS_H
#define FISTFULL0DOLLARS_H
#include "Computer.h"
#include <iostream>
using namespace std;

class FistfullODollars: public Computer
{
    public:
        FistfullODollars();
        virtual char makeMove();
        int count=0;
};

#endif