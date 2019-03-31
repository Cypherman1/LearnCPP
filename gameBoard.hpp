#include <iostream>

using namespace std;

class GameBoard
{
    char gameSpace[4][4];

  public:
    GameBoard();                                        //initialize the board with '-' in all 16 spaces
    void setGameSpace(int row, int column, char value); //x,y,or '-' in each game square
    char getGameSpace(int row, int column);
    int fourInRow();  //four 'x's in any row 'wins'
    void printInfo(); //print the game board in a 4x4 matrix
};

GameBoard ::GameBoard()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            gameSpace[i][j] = '-';
        }
    }
}

void GameBoard::setGameSpace(int row, int column, char value)
{
    gameSpace[row][column] = value;
}

char GameBoard::getGameSpace(int row, int column)
{
    return gameSpace[row][column];
}

int GameBoard::fourInRow()
{
    int count = 0;
    for (int i = 0; i < 4; i++)
    {
        count = 0;
        for (int j = 0; j < 4; j++)
        {
            if (gameSpace[i][j] == 'x')
                count++;
        }
        if (count == 4)
            return 1;
    }
    return 0;
}

void GameBoard::printInfo()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << gameSpace[i][j] << "\t";
        }
        cout << endl;
    }
}