#include "gamebase.cpp"

void EasyGame :: comp()
{
    cn = (rand() % 10) + 1;
}

void EasyGame :: play()
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
