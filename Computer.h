#include"Player.h"
#ifndef COMPUTER_H_
#define COMPUTER_H_
class Computer:public Player
{
    private:
        char computer_enter_move ='R';
    public:
        char makeMove();
        std::string getName( );
};
#endif