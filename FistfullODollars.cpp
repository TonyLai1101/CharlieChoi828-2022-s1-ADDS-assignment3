#include "FistfullODollars.h"

FistfullODollars::FistfullODollars()
{

}

char FistfullODollars::makeMove()
{
    char move_array[3]={'R','P','P'};
    count=count%3;
    count++;
    return move_array[count-1];
}