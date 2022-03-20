#ifndef CRESCENDO_H
#define CRESCENDO_H
#include "Computer.h"
#include <iostream>
using namespace std;

class Crescendo: public Computer
{
    public:
        Crescendo();
        virtual char makeMove();
        int count=0;
};

#endif