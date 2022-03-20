#ifndef TOOLBOX_H
#define TOOLBOX_H
#include "Computer.h"
#include <iostream>
using namespace std;

class Toolbox: public Computer
{
    public:
        Toolbox();
        virtual char makeMove();
};

#endif