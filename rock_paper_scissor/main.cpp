#include <iostream>
#include <cstdlib>
#include <ctime>

#define ROCK 1
#define PAPER 2
#define SCISSORS 3

using namespace std;

int main()
{
    srand(time(0));

    int player_throw=0;
    int comp_throw=0;
    bool draw=false;

    do
    {
       cout << "1) Rock" << endl;
       cout << "2) Paper" << endl;
       cout << "3) Scissor" << endl;
       cout << "Select your throw" << endl;
       cin >> player_throw;
       cout << endl;

       if(player_throw == ROCK)
        cout << "Player throws ROCK." << endl;
       else if (player_throw == PAPER)
        cout << "Player throws PAPER." << endl;
       else if (player_throw == SCISSORS)
        cout << "Player throws SCISSORS." << endl;

       comp_throw = (rand()%3)+1;

       if(comp_throw == ROCK)
        cout << "Computer throws ROCK." << endl;
       else if (comp_throw == PAPER)
        cout << "Computer throws PAPER." << endl;
       else if (comp_throw == SCISSORS)
        cout << "Computer throws SCISSORS." << endl;

       draw = false;

       if(player_throw == comp_throw)
       {
           draw=true;
           cout << "It's a Tie!" << endl;
       }
       else if (player_throw == ROCK && comp_throw == SCISSORS)
        cout << "ROCK beats SCISSORS! YOU WIN." << endl;
       else if (player_throw == ROCK && comp_throw == PAPER)
        cout << "PAPER beats ROCK! YOU LOSE." << endl;
       else if (player_throw == PAPER && comp_throw == ROCK)
        cout << "PAPER beats ROCK! YOU WIN." << endl;
       else if (player_throw == PAPER && comp_throw == SCISSORS)
        cout << "SCISSORS beats PAPER! YOU LOSE." << endl;
       else if (player_throw == SCISSORS && comp_throw == PAPER)
        cout << "SCISSORS beats PAPER! YOU WIN." << endl;
       else if (player_throw == SCISSORS && comp_throw == ROCK)
        cout << "ROCK beats SCISSORS! YOU LOSE." << endl;

    }while(draw);

    return 0;
}
