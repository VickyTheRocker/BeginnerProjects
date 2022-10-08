#include<iostream>
using namespace std;

class NumberGuessGame
{
    int un, cn;

    private:

        bool checkWin()
        {
            if(un == cn)
            {
                return true;
            }
            return false;
        }

    public:

        NumberGuessGame(int n)
        {
            this->un = n;
            cn = (rand() % 10) + 1;
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

int main()
{
    int un;
    cout<<"Enter a number between 1 and 10 (both inclusive):\n";
    cin>>un;

    NumberGuessGame ob(un);

    ob.display();

    return 0;
}