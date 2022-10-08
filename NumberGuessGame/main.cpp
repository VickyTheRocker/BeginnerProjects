#include<iostream>
using namespace std;

int main()
{
    int un, cn;
    cout<<"Enter a number between 1 and 10 (both inclusive):\n";
    cin>>un;

    cn = (rand() % 10) + 1;

    cout<<"Your choice: "<<un<<"\n";
    cout<<"Computer's choice: "<<cn<<"\n";

    if(un == cn)
    {
        cout<<"You won!!\n";
    }
    else
    {
        cout<<"You lose!\n";
    }

    return 0;
}