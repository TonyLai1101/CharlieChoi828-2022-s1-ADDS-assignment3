#include "RandomComputer.h"

RandomComputer::RandomComputer()
{

}

char RandomComputer::makeMove()
{
    int random_choice;
    char c_move;

    srand(time(NULL));
    random_choice=rand()%3+1;

    if (random_choice==1)
    {
        c_move='R';
    }
    else if(random_choice==2)
    {
        c_move='P';
    }
    else
    {
        c_move='S';
    }

    return c_move;
}