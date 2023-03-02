#include<iostream>
#include"Referee.h"
#include"Player.h"
using namespace std;
Player* Referee:: refGame(Player * player1, Player * player2)
{
    char player1_move =player1->makeMove();
    char player2_move =player2->makeMove();
    //win or lose
    if(player1_move==player2_move)
    {
        return nullptr;
    }else if(player1_move=='P')

    {
        return player1;
    }else
    {
        return player2;
    }
};