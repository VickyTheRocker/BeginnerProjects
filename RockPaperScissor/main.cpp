#include<iostream>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    int w;
    string b[3] = {"Rock", "Paper", "Scissor"};
    int uc, cc;

    cout<<"Enter 1 for Rock.\n";
    cout<<"Enter 2 for Paper.\n";
    cout<<"Enter 3 for Scissor.\n";
    cout<<"Enter your choice:\n";
    cin>>uc;

    cc = a[(rand() % 3)];

    cout<<"You chose: "<<b[uc-1]<<"\n";
    cout<<"Computer choose: "<<b[cc]<<"\n";

    if(a[uc-1] == 1)
    {
        if(a[cc] == 3)
        {
            w = 1;
        }
        else if(a[cc] == 2)
        {
            w = 0;
        }
        else
        {
            w = -1;
        }
    }
    else if(a[uc-1] == 2)
    {
        if(a[cc] == 1)
        {
            w = 1;
        }
        else if(a[cc] == 3)
        {
            w = 0;
        }
        else
        {
            w = -1;
        }
    }
    else
    {
        if(a[cc] == 2)
        {
            w = 1;
        }
        else if(a[cc] == 1)
        {
            w = 0;
        }
        else
        {
            w = -1;
        }
    }

    if(w == 1)
    {
        cout<<"You won!\n";
    }
    else if(w == 0)
    {
        cout<<"You lose!\n";
    }
    else
    {
        cout<<"Tie!\n";
    }
    

    return 0;
}