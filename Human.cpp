#include "Human.h"
using namespace std;

Human::Human()
{

}

char Human::makeMove()
{
    char h_move;
    cout<<"Enter move: ";
    cin>>h_move;
    return h_move;
}