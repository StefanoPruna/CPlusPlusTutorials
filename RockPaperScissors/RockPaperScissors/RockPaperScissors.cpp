// RockPaperScissors.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;

char getUserChoice();
char getComputerChoice();
void showChoice(char choice);
void chooseWinner(char player, char computer);


int main()
{   
    char finish;  
          
    do
    {
        char player = getUserChoice();
        cout << "\nPlayer's choice: \n";
        showChoice(player);

        char computer = getComputerChoice();
        cout << "\nComputer's choice: \n";
        //showChoice(computer);
        getComputerChoice();

        chooseWinner(player, computer);

        cout << "Do you want to keep playing? Y/N\n";
        cin >> finish;
    } while (finish != 'n' && finish != 'N');               

    return 0;
}

char getUserChoice()
{
    char player; 

    cout << "Rock Paper Scissors Game!\n";
    cout << "*************************\n";

        do
        {
            cout << "Select one from: \n R - Rock\n P - Paper\n S - Scissors\n";
            cin >> player;
        } while (player != 'r' && player != 'p' && player != 's');
    
    return player;
}
char getComputerChoice()
{    
    char computer[3] = { 'R', 'P', 'S'};
    char randomChoice = computer[rand() % 3];

    switch (randomChoice)
    {
    case 'R':
        cout << "Rock\n";
    case 'P':
        cout << "Paper\n";
    case 'S':
        cout << "Scissors\n";
    }

    return randomChoice;
}
void showChoice(char choice)
{    
    /*switch (choice)
    {
    case 'r':
        cout << "Rock\n";
        break;
    case 'p':
        cout << "Paper\n";
        break;
    case 's':
        cout << "Scissors\n";
        break;
    } */
}
void chooseWinner(char player, char computer)
{      
        if (player == 'r' && computer == 'P')
            cout << "The computer wins!";     
        else if (player == 'p' && computer == 'S')
            cout << "The computer wins!";
        else if (player == 's' && computer == 'R')
            cout << "The computer wins!";
        else if(player = computer)
            cout << "It's a draw!";
        else
            cout << "The player wins!";
}
