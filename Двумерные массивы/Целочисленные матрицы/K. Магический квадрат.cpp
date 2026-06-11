#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    if (n == 2)
    {
        cout << "Impossible";
        return 0;
    }

    vector<vector<long long> > a(n, vector<long long>(n));

    if (n % 2 == 1)
    {
        int i = 0;
        int j = n / 2;

        for (int x = 1; x <= n * n; x++)
        {
            a[i][j] = x;

            int ni = (i - 1 + n) % n;
            int nj = (j + 1) % n;

            if (a[ni][nj] != 0)
            {
                i = (i + 1) % n;
            }
            else
            {
                i = ni;
                j = nj;
            }
        }
    }
    else if (n % 4 == 0)
    {
        long long cur = 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                a[i][j] = cur;
                cur++;
            }
        }

        long long mx = 1LL * n * n + 1;

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if ((i % 4 == j % 4) || ((i % 4) + (j % 4) == 3))
                {
                    a[i][j] = mx - a[i][j];
                }
            }
        }
    }
    else
    {
        int m = n / 2;

        vector<vector<long long> > b(m, vector<long long>(m));

        int i = 0;
        int j = m / 2;

        for (int x = 1; x <= m * m; x++)
        {
            b[i][j] = x;

            int ni = (i - 1 + m) % m;
            int nj = (j + 1) % m;

            if (b[ni][nj] != 0)
            {
                i = (i + 1) % m;
            }
            else
            {
                i = ni;
                j = nj;
            }
        }

        long long add = 1LL * m * m;

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < m; c++)
            {
                a[r][c] = b[r][c];
                a[r][c + m] = b[r][c] + 2 * add;
                a[r + m][c] = b[r][c] + 3 * add;
                a[r + m][c + m] = b[r][c] + add;
            }
        }

        int k = (n - 2) / 4;

        for (int r = 0; r < m; r++)
        {
            for (int c = 0; c < k; c++)
            {
                long long t = a[r][c];
                a[r][c] = a[r + m][c];
                a[r + m][c] = t;
            }
        }

        for (int r = 0; r < m; r++)
        {
            for (int c = n - k + 1; c < n; c++)
            {
                long long t = a[r][c];
                a[r][c] = a[r + m][c];
                a[r + m][c] = t;
            }
        }

        long long t = a[k][0];
        a[k][0] = a[k + m][0];
        a[k + m][0] = t;

        t = a[k][k];
        a[k][k] = a[k + m][k];
        a[k + m][k] = t;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j > 0)
            {
                cout << " ";
            }

            cout << a[i][j];
        }

        cout << "\n";
    }

    return 0;
}