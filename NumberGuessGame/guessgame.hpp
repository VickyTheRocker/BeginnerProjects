
class GameBase
{
    private:

        bool checkWin();

    protected:

        void input();
        void display();
};

class HardGame : virtual protected GameBase
{
    private:

        void comp();

    protected:

        void play();
};

class EasyGame : virtual protected GameBase
{
    private:

        void comp();

    protected:

        void play();
};

class NumberGuessGame : virtual EasyGame, virtual HardGame
{
    public:

        void play();
};