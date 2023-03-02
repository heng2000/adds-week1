#include<iostream>
#include<string>
#include"Human.h"
using namespace std;
string Human:: getName()
{
    return "human";
}
char Human::makeMove()
{
    cout << "Enter move: ";
    cin >> user_entered_move;
    return user_entered_move;  
};