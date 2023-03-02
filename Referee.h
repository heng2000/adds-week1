#include<iostream>
#include"Player.h"
#ifndef REFEREE_H_
#define REFEREE_H_

class Referee
{
    private:
        
    public:
        Player * refGame(Player * player1, Player * player2);//collect 2 pointers,than makemove function could be called
        //return the pointer of the winner.
};
#endif    