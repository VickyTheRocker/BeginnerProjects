#include<iostream>
#include "easy.cpp"
#include "hard.cpp"
using namespace std;

class NumberGuessGame : virtual EasyGame, virtual HardGame
{
    private:

        int c;

    public:

        void play()
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
};

int main()
{
    NumberGuessGame ob;

    while (true)
    {
        ob.play();
    }
    

    return 0;
}