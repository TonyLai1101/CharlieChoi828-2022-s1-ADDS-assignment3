#include "PaperDoll.h"

PaperDoll::PaperDoll()
{

}

char PaperDoll::makeMove()
{
    char move_array[3]={'P','S','S'};
    int count=0;
    count=count%3;
    count++;
    return move_array[count-1];
}