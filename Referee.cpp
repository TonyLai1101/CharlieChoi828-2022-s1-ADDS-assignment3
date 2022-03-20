#include "Referee.h"

Referee::Referee()
{

}

char Referee::refGame(Player* player1, Player* player2)
{
    char move1, move2, result;

    move1=(*player1).makeMove();
    move2=(*player2).makeMove();

    if ((move1=='R') && (move2=='R'))
    {
        result='T';
    }
    if ((move1=='P') && (move2=='P'))
    {
        result='T';
    }
    if ((move1=='S') && (move2=='S'))
    {
        result='T';
    }
    if ((move1=='R') && (move2=='S'))
    {
        result='W';
    }
    if ((move1=='P') && (move2=='R'))
    {
        result='W';
    }
    if ((move1=='S') && (move2=='P'))
    {
        result='W';
    }
    if ((move1=='R') && (move2=='P'))
    {
        result='L';
    }
    if ((move1=='P') && (move2=='S'))
    {
        result='L';
    }
    else 
    {
        result='L';
    }

    return result;
}