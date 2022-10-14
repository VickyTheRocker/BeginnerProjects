/*

This file implements the NumberGuessGame class which is responsible for the implementation of easy or hard mode of the NumberGuessGame as per user's choice.

*/


// All the necessary files are included that finally implement the whole game.

#include<iostream>
#include "gamebase.cpp"
#include "easy.cpp"
#include "hard.cpp"

#define clrscr() cout<<"\033[2J\033[1;1H"  // Implments Clear screen function

using namespace std;

int c;

void NumberGuessGame :: play() // this method implements easy or hard game mode as per user's choice.
{
    clrscr();
    cout<<"========================\n";
    cout<<"  Number Guessing Game  \n";
    cout<<"========================\n";
    cout<<"    1. Hard mode.       \n";
    cout<<"    2. Easy mode.       \n";
    cout<<"  Enter your choice:    \n";
    cin>>c;
    cout<<"\n\n";

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
