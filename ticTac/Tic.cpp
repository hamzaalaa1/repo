#include "Tic.h"
#include <iostream>
#include <iomanip>
#include <stdlib.h>
using namespace std;
TicGame::TicGame()
{
    intializeBoard();

    master();
}
void TicGame::PrintBoard()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            cout << ' ' << board[i][j] << ' ' << ((j != 2) ? '|' : ' ');
        cout << '\n';
        if (i == 1 || i == 0)
        {
            cout << "ـــــــــــ";
        }
        cout << '\n';
    }
}
bool TicGame::checkP(int X, int Y)
{
    if (board[X][Y] == ' ' && X < 3 && X >= 0 && Y >= 0 && Y < 3)
        return true;
    else
    {
        cout << "NOT HERE !!!!!!\n";
        return false;
    }
}

int TicGame::checkWin()
{
    for (int i = 0; i < 3; i++) // check colume
    {

        if (board[i][0] == ' ')
        {
            break;
        }
        else if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] == 'x'))
        {
            return 1;
        }
        else if ((board[i][0] == board[i][1]) && (board[i][1] == board[i][2]) && (board[i][1] == 'o'))
        {
            return 2;
        }
    }
    for (int i = 0; i < 3; i++) // check rows
    {
        if (board[0][i] == ' ')
        {
            break;
        }
        else if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] == 'x'))
        {
            return 1;
        }
        else if ((board[0][i] == board[1][i]) && (board[1][i] == board[2][i]) && (board[1][i] == 'o'))
        {
            return 2;
        }
    }
    for (int i = 0, j = 0; i < 2 && j < 2; i++, j++) // check digonal
    { 
        if (board[i][j] != board[i + 1][j + 1])
        {
            break;
        }
        else if (i == 1)
        {
            if (board[i][j] == 'x')
            {
                return 1;
            }
            else if(board[i][j] == '0')
            {
                return 2;
            }
        }
    }
    for (int i = 0, j = 2; i < 2 && j >= 0; j--, i++) // check digonal
    {
        if (board[i][j] == ' ')
        {
            break;
        }
        if (board[i][j] != board[i + 1][j - 1])
        {
            break;
        }
        else if (i == 1)
        {
            if (board[i][j] == 'x')
            {
                return 1;
            }
            else if(board[i][j] == 'o')
            {
                return 2;
            }
        }
    }
    return 0;
}
void TicGame::putPlay(int x, int y, int P)
{

    if (P == 1 && checkP(x, y))
    {
        board[x][y] = 'x';
    }
    else if (P == 2 && checkP(x, y))
    {
        board[x][y] = 'o';
    }
    else
    {
        if (P == 1)
        {
            player1();
        }
        else if (P == 2)
        {
            player2();
        }
    }
}
bool TicGame::checkDraw()
{
    for (int i = 0; i < 9; i++)
    {
        if (board[0][i] == ' ')
            return false;
    }
    return true;
}
void TicGame::player1()
{
    int x, y;
    cout << "PLAYER 1 X\n";
    cout << "enter Posion\n";
    cin >> x >> y;
    putPlay(x, y, 1);
}
void TicGame::player2()
{
    int x, y;
    cout << "PLAYER 2 O\n";
    cout << "enter Posion\n";
    cin >> x >> y;
    putPlay(x, y, 2);
}

void TicGame::intializeBoard()
{
    for (int i = 0; i < 9; i++)
    {
        board[0][i] =' ';
    }
}
void TicGame::master()
{
    char p;
    int x, y;
    cout << "Choice How Start Play";
    cin >> p;
    while ((int)p % 32 == 24)
    {

        player1();
        if (checkWin() == 1)
        {
            cout << "X is the Winner\n";
            PrintBoard();
            return;
        }
        else if (checkDraw())
        {
            cout << "No Winner DRAW\n";
            PrintBoard();
             return;
        }
        else
        {
            PrintBoard();
 
        }
        PrintBoard();
        player2();
         if (checkWin() == 2)
        {
            cout << "O is the Winner\n";
            PrintBoard();
             return;
        }
        else if (checkDraw())
        {
            cout << "No Winner DRAW\n";
            PrintBoard();
            system("clear");
            return;
        }
        else
        {
            PrintBoard();
            system("clear");

        }
         PrintBoard();
    }
    while ((int)p % 32 == 15)
    {
        player2();
        if (checkWin() == 2)
        {
            cout << "O is the Winner\n";
            PrintBoard();
            system("clear");
            return;
        }
        else if (checkDraw())
        {
            cout << "No Winner DRAW\n";
            PrintBoard();
            system("clear");
            return;
        }
        else
        {
            PrintBoard();
            system("clear");

        }
        PrintBoard();
         player1();
         system("clear");
        if (checkWin() == 1)
        {
            cout << "X is the Winner\n";
            PrintBoard();
            system("clear");
            return;
        }
        else if (checkDraw())
        {
            cout << "No Winner DRAW\n";
            PrintBoard();
            system("clear");
            return;
        }
        else
        {
            PrintBoard();
            system("clear");
        }
        PrintBoard();
     }
}