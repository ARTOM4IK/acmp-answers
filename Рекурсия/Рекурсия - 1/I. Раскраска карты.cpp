#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int n;
int g[20][20];

vector<int> order;
vector<int> color;
int K;

bool dfs(int pos)
{
    if (pos == n)
        return true;

    int v = order[pos];

    for (int c = 1; c <= K; c++)
    {
        bool ok = true;

        for (int u = 0; u < n; u++)
        {
            if (g[v][u] && color[u] == c)
            {
                ok = false;
                break;
            }
        }

        if (!ok)
            continue;

        color[v] = c;

        if (dfs(pos + 1))
            return true;

        color[v] = 0;
    }

    return false;
}

int main()
{
    cin >> n;

    vector<int> deg(n);

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> g[i][j];
            deg[i] += g[i][j];
        }
    }

    order.resize(n);

    for (int i = 0; i < n; i++)
        order[i] = i;

    sort(order.begin(), order.end(),
         [&](int a, int b)
         {
             return deg[a] > deg[b];
         });

    for (K = 1; K <= 4; K++)
    {
        color.assign(n, 0);

        if (dfs(0))
        {
            for (int i = 0; i < n; i++)
                cout << color[i] << ' ';
            return 0;
        }
    }
}