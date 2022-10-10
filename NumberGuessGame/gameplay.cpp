/*

This file implements the EasyGame class which is responsible for the easy mode of the NumberGuessGame

*/


// All the necessary files are included that finally implement the whole game.

#include<iostream>
#include "gamebase.cpp"
#include "easy.cpp"
#include "hard.cpp"

using namespace std;

int c;

void NumberGuessGame :: play() // this method implements easy or hard game mode as per user's choice.
{
    cout<<"1. Hard mode.\n";
    cout<<"2. Easy mode.\n";
    cout<<"Enter your choice:\n";
    cin>>c;

    switch(c)
    {
        case 1:
            HardGame :: play();
        break;
        case 2:
            EasyGame :: play();
        break;
        default:
            cout<<"Wrong choice!\n";
            exit(0);
    }
}
