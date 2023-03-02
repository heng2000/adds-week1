#include<iostream>
#ifndef PLAYER_H_
#define PLAYER_H_
class Player
{
    // private:
    //     int score;
    //     std::string user_entered_player;
    public:
        virtual char makeMove( )=0;
        virtual std::string getName( )=0;
};
#endif