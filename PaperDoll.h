#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <iostream>
using namespace std;

class PaperDoll: public Computer
{
    public:
        PaperDoll();
        virtual char makeMove();
        int count=0;
};

#endif