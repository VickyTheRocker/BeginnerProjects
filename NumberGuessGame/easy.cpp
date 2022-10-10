/*

This file implements the EasyGame class which is responsible for the easy mode of the NumberGuessGame

*/

#include "gamebase.cpp"    // The base file is included that includes the implementation of GameBase class.

void EasyGame :: comp()    // This method computes random number for computer.
{
    cn = (rand() % 10) + 1;
}

void EasyGame :: play()    // This method implements the easy mode gameplay.
{
    EasyGame ob;
    ob.input();
    if(un==0)
    {
        std::cout<<"Session being terminated...\n";
        exit(0);
    }
    else if(un>10 || un<0)
    {
        std::cout<<"Invalid input! Session being terminated...\n";
        exit(0);
    }
    else
    {
        ob.comp();
        ob.display();
    }
}
