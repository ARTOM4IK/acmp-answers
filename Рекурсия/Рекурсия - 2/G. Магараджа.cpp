#include <iostream>
#include <vector>

using namespace std;

int N;
int K;

long long answer = 0;

bool col[10];
bool diag1[25];
bool diag2[25];

vector<pair<int, int>> figs;

void dfs(int row, int placed)
{
    if (placed > K)
    {
        return;
    }

    if (placed + (N - row) < K)
    {
        return;
    }

    if (row == N)
    {
        if (placed == K)
        {
            answer++;
        }

        return;
    }

    dfs(row + 1, placed);

    if (placed == K)
    {
        return;
    }

    for (int c = 0; c < N; c++)
    {
        if (col[c])
        {
            continue;
        }

        int d1 = row - c + N - 1;
        int d2 = row + c;

        if (diag1[d1] || diag2[d2])
        {
            continue;
        }

        bool ok = true;

        for (int i = 0; i < (int)figs.size(); i++)
        {
            int dr = abs(figs[i].first - row);
            int dc = abs(figs[i].second - c);

            if ((dr == 1 && dc == 2) ||
                (dr == 2 && dc == 1))
            {
                ok = false;
                break;
            }
        }

        if (!ok)
        {
            continue;
        }

        col[c] = true;
        diag1[d1] = true;
        diag2[d2] = true;

        figs.push_back({row, c});

        dfs(row + 1, placed + 1);

        figs.pop_back();

        col[c] = false;
        diag1[d1] = false;
        diag2[d2] = false;
    }
}

int main()
{
    cin >> N >> K;

    dfs(0, 0);

    cout << answer;

    return 0;
}