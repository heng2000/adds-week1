#include<iostream>
#include"Player.h"
#include"Computer.h"
#include"Human.h"
#include"Referee.h"
using namespace std;

int main()
{
    //creat a human player and a computer player
    Human player_human;
    Computer player_computer;
    Referee player_ref;
    //move 
    //human_player_move will prompt to input a move
    // player_human.makeMove();
    // player_computer.makeMove();
    //winner pointer will return the winner of the game
    Player*winner=player_ref.refGame(&player_human, &player_computer);
    if (winner==nullptr)
    {
        cout<<"TIE";
    }else{
        cout<<winner->getName()<<endl;
    }
    return 0;
}