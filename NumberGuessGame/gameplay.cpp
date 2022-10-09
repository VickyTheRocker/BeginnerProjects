#include<iostream>
#include "gamebase.cpp"
#include "easy.cpp"
#include "hard.cpp"

using namespace std;

int c;

void NumberGuessGame :: play()
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
