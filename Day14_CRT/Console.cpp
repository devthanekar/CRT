#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int WIDTH = 3;

void drawRoad(int carPos, int obstaclePos)
{
    cout << "\n\n";

    for(int i = 0; i < 5; i++)
    {
        cout << "| ";

        for(int lane = 0; lane < WIDTH; lane++)
        {
            if(i == 4 && lane == carPos)
                cout << "A ";
            else if(i == 0 && lane == obstaclePos)
                cout << "X ";
            else
                cout << ". ";
        }

        cout << "|\n";
    }
}

int main()
{
    srand(time(0));

    int carPos = 1;
    int score = 0;

    while(true)
    {
        int obstaclePos = rand() % WIDTH;

        drawRoad(carPos, obstaclePos);

        cout << "\nScore: " << score << endl;
        cout << "Move (a=left, d=right, q=quit): ";

        char move;
        cin >> move;

        if(move == 'a' && carPos > 0)
            carPos--;

        else if(move == 'd' && carPos < WIDTH - 1)
            carPos++;

        else if(move == 'q')
            break;

        if(carPos == obstaclePos)
        {
            cout << "\nCRASH!\n";
            cout << "Game Over!\n";
            cout << "Final Score: " << score << endl;
            break;
        }

        score++;
    }

    return 0;
}
