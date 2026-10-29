#include <iostream>

using namespace std;

int main(void)
{
    long long board[21][21] = {0};

    for (int i = 0; i <= 20; i++)
    {
        board[i][0] = 1;
        board[0][i] = 1;
    }

    for (int i = 1; i <= 20; i++)
    {
        for (int j = 1; j <= 20; j++)
        {
            board[i][j] = board[i - 1][j] + board[i][j - 1];
        }
    }

    cout << board[20][20] << endl;
    return 0;
}