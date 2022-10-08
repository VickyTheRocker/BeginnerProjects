#include<iostream>
#include "gamebase.cpp"
using namespace std;

class EasyGame : virtual protected GameBase
{
    private:

        void comp()
        {
            cn = (rand() % 10) + 1;
        }

    protected:

        void play()
        {
            EasyGame ob;
            ob.input();
            ob.comp();
            ob.display();
        }
};