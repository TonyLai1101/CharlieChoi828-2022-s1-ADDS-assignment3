#ifndef BUREAUCRAT_H
#define BUREAUCRAT_H
#include "Computer.h"
#include <iostream>
using namespace std;

class Bureaucrat: public Computer
{
    public:
        
        char makeMove();
};

#endif
