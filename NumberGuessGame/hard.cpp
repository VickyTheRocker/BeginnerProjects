#include<iostream>
#include "gamebase.cpp"
using namespace std;

class HardGame : virtual protected GameBase
{
    private:

        void comp()
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

    protected:

        void play()
        {
            HardGame ob;
            ob.input();
            ob.comp();
            ob.display();
        }
};