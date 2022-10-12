/*

This file implements the GameBase class which acts as the base class for EasyGame and HardGame class.

*/

// header guards included to prevent redefinition of class
#ifndef base
#define base

#include "guessgame.hpp"
#include<iostream>
using namespace std;

int un, cn;
bool GameBase :: checkWin()    // This method check who wins
{
    if(un == cn)
    {
        return true;
    }
    return false;
}

void GameBase :: input()    // This method takes user input
{
    cout<<"Enter a number between 1 and 10 (both inclusive)\n";
    cout<<"Enter \"0\" to exit.\n\n";
    cout<<"=> ";
    cin>>un;
}

void GameBase :: display()    // This method displays the results
{
    cout<<"\nYour choice: "<<un<<"\n";
    cout<<"Computer's choice: "<<cn<<"\n";

    if(checkWin())
    {
        cout<<"You Won!!\n\n";
    }
    else
    {
        cout<<"You Lose!\n\n";
    }
}


#endif
