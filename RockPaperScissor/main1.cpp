#include<bits/stdc++.h>
#include<iostream>
using namespace std;
class rock{

public:

  
int winner(int uc,int a[],string b[]){
int w;
 int cc = a[(rand() % 3)]-1;   
 print(uc,cc,b);
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

return w;}
       



void print(int uc,int cc,string b[]){
      cout<<"You chose: "<<b[uc-1]<<"\n";
        cout<<"Computer choose: "<<b[cc]<<"\n";
}
};

int main()
{
    int w;
     int a[3] = {1, 2, 3};
 string b[3] = {"Rock", "Paper", "Scissor"};
    int uc, cc, c;

    while(true)
    {
        cout<<"Enter 1 for Rock.\n";
        cout<<"Enter 2 for Paper.\n";
        cout<<"Enter 3 for Scissor.\n";
        cout<<"Enter your choice:\n";
        
        cin>>uc;
  rock obj;
  w=obj.winner(uc,a,b);
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
 cout<<"Do you want to play again?\n";
        cout<<"Enter 1 for YES.\n";
        cout<<"Enter 2 for NO.\n";
        cin>>c;

        if(c == 2)
        {
            cout<<"Session being terminated...\n";
            exit(0);
        }
        else if(c != 1)
        {
            cout<<"Wrong choice! Session being terminated...\n";
            exit(0);
        }
        else
        {
            cout<<"\e[1;1H\e[2J";
            cc=0;
            uc=0;
        }

       
    }
    
    

    return 0;
}
