#include<iostream>
#include"Player.h"
#include"Computer.h"
#include"Human.h"
#include"Referee.h"
using namespace std;

int main()
{
    Human player_human;
    Computer player_computer;
    Referee player_ref;
    Player*winner=player_ref.refGame(&player_human, &player_computer);
    if (winner==nullptr)
    {
        cout<<"It's a Tie";
    }else{
        cout<<winner->getName()<<endl;
    }
    return 0;
}