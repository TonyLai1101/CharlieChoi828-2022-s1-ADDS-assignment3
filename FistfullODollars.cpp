#include "FistfullODollars.h"

FistfullODollars::FistfullODollars()
{

}

char FistfullODollars::makeMove()
{
    char move_array[3]={'R','P','P'};
    int i=i%3;
    i++;
    return move_array[i-1];
}