#include "Player.h"
#ifndef HUMAN_H_
#define HUMAN_H_
class Human:public Player

{
    private:
        char user_entered_move;
        std::string user_entered_name;
    public:
        void set_user_entered_name(const std::string u);//set user_entered string
        std::string getName( );//get user_entered string
        char makeMove();//make move will be saved in user_entered_move,show user's choose
};
#endif