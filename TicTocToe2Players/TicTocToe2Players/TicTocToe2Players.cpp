// TicTocToe2Players.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;

void drawBoard(char* spaces);
void firstPlayerMove(char* spaces, char firstPlayer);
void secondPlayerMove(char* spaces, char secondPlayer);
bool checkWinner(char* spaces, char firstPlayer, string firstPlayerName, char secondPlayer, string secondPlayerName);
bool checkTie(char* spaces);

int main()
{
    //Declaring the board
    char spaces[9] = { ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ' };
    char firstPlayer = 'X';
    string firstPlayerName;
    char secondPlayer = 'O';
    string secondPlayerName;
    bool running = true;


    cout << "Enter the name for the first player:\n";
    cin >> firstPlayerName;
    cout << "Enter the name for the second player:\n";
    cin >> secondPlayerName;

    //We don't need to create the pointer for the Array/s
    drawBoard(spaces);

    while (running)
    {
        firstPlayerMove(spaces, firstPlayer);
        drawBoard(spaces);
        if (checkWinner(spaces, firstPlayer, firstPlayerName, secondPlayer, secondPlayerName))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
        secondPlayerMove(spaces, secondPlayer);
        drawBoard(spaces);
        if (checkWinner(spaces, firstPlayer, firstPlayerName, secondPlayer, secondPlayerName))
        {
            running = false;
            break;
        }
        else if (checkTie(spaces))
        {
            running = false;
            break;
        }
    }

    cout << "\n";
    cout << "THANKS FOR PLAYING!";

    return 0;
}

void drawBoard(char* spaces)
{
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[0] << "  |  " << spaces[1] << "  |  " << spaces[2] << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[3] << "  |  " << spaces[4] << "  |  " << spaces[5] << '\n';
    cout << "_____|_____|_____" << '\n';
    cout << "     |     |     " << '\n';
    cout << "  " << spaces[6] << "  |  " << spaces[7] << "  |  " << spaces[8] << '\n';
    cout << "     |     |     " << '\n';
    cout << '\n';
}

void firstPlayerMove(char* spaces, char firstPlayer)
{
    int number;
    do {
        cout << "Enter a spot to place a marker (1-9):\n";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = firstPlayer;
            break;
        }
        else
            cout << "The spot selected is not correct, try again (1-9):\n";

    } while (!number > 0 || !number < 8);
}

void secondPlayerMove(char* spaces, char secondPlayer)
{
    int number;
    do {
        cout << "Enter a spot to place a marker (1-9):\n";
        cin >> number;
        number--;
        if (spaces[number] == ' ')
        {
            spaces[number] = secondPlayer;
            break;
        }
        cout << "The spot selected is not correct, try again (1-9):\n";

    } while (!number > 0 || !number < 8);
}

bool checkWinner(char* spaces, char firstPlayer, string firstPlayerName, char secondPlayer, string secondPlayerName)
{
    //Checking the ROWS
    if (spaces[0] != ' ' && spaces[0] == spaces[1] && spaces[1] == spaces[2])
        spaces[0] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else if (spaces[3] != ' ' && spaces[3] == spaces[4] && spaces[4] == spaces[5])
        spaces[3] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else if (spaces[6] != ' ' && spaces[6] == spaces[7] && spaces[7] == spaces[8])
        spaces[6] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    //Checking the columns
    else if (spaces[0] != ' ' && spaces[0] == spaces[3] && spaces[3] == spaces[6])
        spaces[0] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else if (spaces[1] != ' ' && spaces[1] == spaces[4] && spaces[4] == spaces[7])
        spaces[1] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else if (spaces[2] != ' ' && spaces[2] == spaces[5] && spaces[5] == spaces[8])
        spaces[2] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    //Checking the diagonals
    else if (spaces[0] != ' ' && spaces[0] == spaces[4] && spaces[4] == spaces[8])
        spaces[0] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else if (spaces[2] != ' ' && spaces[2] == spaces[4] && spaces[4] == spaces[6])
        spaces[2] == firstPlayer ? cout << firstPlayerName << " WON!\n" : cout << secondPlayerName << " WON!\n";
    else
        return false;

    return true;
}
bool checkTie(char* spaces)
{
    for (int i = 0; i < 9; i++)
    {
        if (spaces[i] == ' ')
            return false;
    }
    cout << "IT'S A TIE!\N";

    return true;
}