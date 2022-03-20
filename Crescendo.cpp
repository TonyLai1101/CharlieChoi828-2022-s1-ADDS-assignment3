#include "Crescendo.h"

Crescendo::Crescendo()
{

}

char Crescendo::makeMove()
{
    char move_array[3]={'R','P','S'};
    count=count%3;
    count++;
    return move_array[count-1];
}