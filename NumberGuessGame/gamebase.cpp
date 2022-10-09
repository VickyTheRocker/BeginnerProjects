#ifndef base
#define base

#include "guessgame.hpp"
#include<iostream>
using namespace std;

int un, cn;
bool GameBase :: checkWin()
{
    if(un == cn)
    {
        return true;
    }
    return false;
}

void GameBase :: input()
{
    cout<<"Enter a number between 1 and 10 (both inclusive)\n";
    cout<<"Enter \"0\" to exit.\n";
    cin>>un;
}

void GameBase :: display()
{
    cout<<"Your choice: "<<un<<"\n";
    cout<<"Computer's choice: "<<cn<<"\n";

    if(checkWin())
    {
        cout<<"You won!!\n";
    }
    else
    {
        cout<<"You lose!\n";
    }
}


#endif