#ifndef base
#define base

#include<iostream>
using namespace std;

class GameBase
{
    private:

        bool checkWin()
        {
            if(un == cn)
            {
                return true;
            }
            return false;
        }

    protected:

        int un, cn;

        void input()
        {
            cout<<"Enter a number between 1 and 10 (both inclusive)\n";
            cout<<"Enter \"0\" to exit.\n";
            cin>>un;
        }

        void display()
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
};

#endif