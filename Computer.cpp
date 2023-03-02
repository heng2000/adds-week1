#include<iostream>
#include"Computer.h"

char Computer::makeMove()
{
    computer_enter_move ='R';
    return computer_enter_move;
}

std::string Computer::getName( )
{
    return "computer";
};

