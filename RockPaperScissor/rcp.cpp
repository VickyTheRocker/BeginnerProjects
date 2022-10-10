#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
#include <vector>

using namespace std;
class Player{
        public:
        void play(); //for the computer players only
        string hand;
        int hands_won;
        string name;
};
void Player::play(){
    string choices[3]{"rock", "paper", "scissors"};
    hand = choices[std::rand()%3]; //select rock, paper, or scissors at random
}
vector<Player> players(2);
void print_winner(int mode);
bool GAME_OVER();
int game_start(){
    cout << "-------------------------------------------\n";
    cout << "Select a mode: \n";
    cout << "1. human vs computer\n2. computer vs computer\n";
    cout << "-------------------------------------------\n";
    int mode;
    cin >> mode;
    if (mode == 1){
        cout << "Enter your name: ";
        cin >> players[0].name;
        players[1].name = "Computer";
    }
    if (mode == 3){
        players[0].name = "Computer 1";
        players[1].name = "Computer 2";
    }
    while (mode == 1){ //game loop for mode 1
        while (!GAME_OVER()){
            cout << "\nWhat will you chose? rock, paper, or scissors? ";
            cin >> players[0].hand;//player makes choice
            players[1].play();//computer makes its choice
            cout << std::endl;
            cout << "You chose: " << players[0].hand << "     Computer chose: " << players[1].hand << std::endl; //display each player's choice for the round
            print_winner(1); //display the winner of the round
            while (players[0].hand == players[1].hand){ //check to see if the round was a draw
                cout << "\nWhat will you chose? rock, paper, or scissors? ";
                cin >> players[0].hand;
                players[1].play();
                cout << endl;
                cout << "You chose: " << players[0].hand << "     Computer chose: " << players[1].hand << std::endl;
                print_winner(1);
            }
        }
        if (GAME_OVER()){ //display the winner of the game
            if (players[0].hands_won == 2){
                cout << "Congratulations, " << players[0].name << ". You win the game!\n";
                return 1;
            }else{
                cout << "Game over. You lose.\n";
                return 0;
            }
        }

    }
}
void print_winner(int mode){ //determine which player won the round
    if (mode == 1){
        if (players[0].hand == "rock" && players[1].hand == "scissors"){
            cout << "          You win!";
            players[0].hands_won += 1;
        }else if (players[0].hand == "scissors" && players[1].hand == "paper"){
            cout << "          You win!";
            players[0].hands_won += 1;
        }else if (players[0].hand == "paper" && players[1].hand == "rock"){
            cout << "          You win!";
            players[0].hands_won += 1;
        }else if (players[0].hand == players[1].hand){
            cout << "        It's a draw!";
        }else{
            cout << "        Computer wins!";
        players[1].hands_won += 1;
        }
    }else{
        if (players[0].hand == "rock" && players[1].hand == "scissors"){
            cout << "        Computer 1 wins!";
            players[0].hands_won += 1;
        }else if (players[0].hand == "scissors" && players[1].hand == "paper"){
            cout << "        Computer 1 wins!";
            players[0].hands_won += 1;
        }else if (players[0].hand == "paper" && players[1].hand == "rock"){
            cout << "        Computer 1 wins!";
            players[0].hands_won += 1;
        }else if (players[0].hand == players[1].hand){
            cout << "        It's a draw!";
        }else{
        cout << "        Computer 2 wins!";
        players[1].hands_won += 1;
        }
    }
}
int main()
{   
    srand(time(NULL));
    cout << "---------------------------------------------------\n";
    cout << "Welcome to Rock, Paper, Scissors.\nTo play, type '1'. \nTo exit, type '2'.\n";
    cout << "---------------------------------------------------\n";
    int choice;
    cin >> choice;
    switch (choice){
        case 1:
            game_start();
            break;
        case 2:
            return 0;
        default:
            cout << "You made an invalid choice. Exiting game...";
            return 0;
    }
    if (GAME_OVER()){ //ask the user if they would like to play again
        cout << "Would you like to play again? <y/n>   ";
        char input;
        cin >> input;
        if (input == 'y'){
            game_start();
        }
        return 0;
    }
}
bool GAME_OVER(){
    if(players[0].hands_won == 2 || players[1].hands_won == 2){ //best 2/3
        return true;
    }
    return false;
}

