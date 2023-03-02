#include<iostream>
#include"computer.h"
using namespace std;

int main()
{
    computer obj;
    cout<<obj.getcomputer_enter_function()<<endl;
    obj.setcomputer_enter_function("yuheng");
    cout<<obj.getcomputer_enter_function()<<endl;
    return 0;
}