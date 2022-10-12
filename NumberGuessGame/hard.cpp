/*

This file implements the EasyGame class which is responsible for the easy mode of the NumberGuessGame

*/

#include "gamebase.cpp"    // GameBase class implementation included.

void HardGame :: comp()    // This method computes random number for computer in such a way that user never wins.
{
    if(un == 1 || un == 10)
    {
        cn = (rand() % 9) +1;
    }
    else
    {
        while(true)
        {
            cn = (rand() % 10) +1;
            if(cn != un)
            {
                break;
            }
        }
    }
}

void HardGame :: play()    // This method implements the hard mode gameplay
{
    HardGame ob;
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
