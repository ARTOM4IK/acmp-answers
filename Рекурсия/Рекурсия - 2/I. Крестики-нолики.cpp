#include <iostream>
#include <vector>

using namespace std;

char board[3][3];

bool win(char c)
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == c &&
            board[i][1] == c &&
            board[i][2] == c)
        {
            return true;
        }

        if (board[0][i] == c &&
            board[1][i] == c &&
            board[2][i] == c)
        {
            return true;
        }
    }

    if (board[0][0] == c &&
        board[1][1] == c &&
        board[2][2] == c)
    {
        return true;
    }

    if (board[0][2] == c &&
        board[1][1] == c &&
        board[2][0] == c)
    {
        return true;
    }

    return false;
}

bool full()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '.')
            {
                return false;
            }
        }
    }

    return true;
}

int minimax(bool myTurn, char me, char enemy)
{
    if (win(me))
    {
        return 1;
    }

    if (win(enemy))
    {
        return -1;
    }

    if (full())
    {
        return 0;
    }

    if (myTurn)
    {
        int best = -2;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '.')
                {
                    board[i][j] = me;

                    int cur = minimax(false, me, enemy);

                    board[i][j] = '.';

                    if (cur > best)
                    {
                        best = cur;
                    }
                }
            }
        }

        return best;
    }
    else
    {
        int best = 2;

        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                if (board[i][j] == '.')
                {
                    board[i][j] = enemy;

                    int cur = minimax(true, me, enemy);

                    board[i][j] = '.';

                    if (cur < best)
                    {
                        best = cur;
                    }
                }
            }
        }

        return best;
    }
}

void makeMove(char me, char enemy)
{
    int bestScore = -2;
    int bestX = -1;
    int bestY = -1;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (board[i][j] == '.')
            {
                board[i][j] = me;

                int cur = minimax(false, me, enemy);

                board[i][j] = '.';

                if (cur > bestScore)
                {
                    bestScore = cur;
                    bestX = j;
                    bestY = i;
                }
            }
        }
    }

    board[bestY][bestX] = me;

    cout << bestX + 1 << " " << bestY + 1 << endl;
    cout.flush();
}

int main()
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            board[i][j] = '.';
        }
    }

    int p;
    cin >> p;

    char me;
    char enemy;

    if (p == 1)
    {
        me = 'X';
        enemy = 'O';

        makeMove(me, enemy);

        for (int turn = 0; turn < 4; turn++)
        {
            int x;
            int y;

            cin >> x >> y;

            board[y - 1][x - 1] = enemy;

            makeMove(me, enemy);
        }
    }
    else
    {
        me = 'O';
        enemy = 'X';

        for (int turn = 0; turn < 4; turn++)
        {
            int x;
            int y;

            cin >> x >> y;

            board[y - 1][x - 1] = enemy;

            makeMove(me, enemy);
        }
    }

    return 0;
}