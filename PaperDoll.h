#ifndef PAPERDOLL_H
#define PAPERDOLL_H
#include "Computer.h"
#include <iostream>
using namespace std;

class PaperDoll: public Computer
{
    public:
        PaperDoll();
        char makeMove();
};

#endif