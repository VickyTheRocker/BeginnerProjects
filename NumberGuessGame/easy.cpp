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
    ob.comp();
    ob.display();
}
