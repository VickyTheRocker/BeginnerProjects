/* 

OVERVIEW OF THE FILE

This is the header file for the NumberGuessGame project.

It includes the declarartions of all the classes that have been created in the project.

*/

/*

GameBase class behaves as the base class for the EasyGame and HardGame classes that share similar functionality.

*/
class GameBase
{
    private:

        bool checkWin();

    protected:

        void input();
        void display();
};


/*

HardGame class includes the implementation of the hard mode of the NumberGuessGame.
This class inherits from GameBase class.

*/
class HardGame : virtual protected GameBase
{
    private:

        void comp();

    protected:

        void play();
};


/*

EasyGame class includes the implementation of the easy mode of the NumberGuessGame.
This class inherits from GameBase class.

*/
class EasyGame : virtual protected GameBase
{
    private:

        void comp();

    protected:

        void play();
};


/*

NumberGuessGame class implements the gameplay of both the easy and hard modes of the game.
This class inherits from EasyGame class and HardGame class.

*/
class NumberGuessGame : virtual EasyGame, virtual HardGame
{
    public:

        void play();
};
