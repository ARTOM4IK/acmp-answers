#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long toNumber(const string& s)
{
    long long x = 0;

    for (char c : s)
        x = x * 10 + (c - '0');

    return x;
}

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    string sa = to_string(a);
    string sb = to_string(b);

    int cntB[10] = {};

    for (char ch : sb)
        cntB[ch - '0']++;

    sort(sa.begin(), sa.end());

    bool found = false;
    long long bestX = 0;
    long long bestY = 0;

    do
    {
        long long x = toNumber(sa);

        if (x > c)
            continue;

        long long y = c - x;

        string sy = to_string(y);

        if ((int)sy.size() > (int)sb.size())
            continue;

        string padded((int)sb.size() - (int)sy.size(), '0');
        padded += sy;

        int cntY[10] = {};

        for (char ch : padded)
            cntY[ch - '0']++;

        bool ok = true;

        for (int d = 0; d < 10; d++)
        {
            if (cntY[d] != cntB[d])
            {
                ok = false;
                break;
            }
        }

        if (!ok)
            continue;

        if (!found || x < bestX)
        {
            found = true;
            bestX = x;
            bestY = y;
        }

    } while (next_permutation(sa.begin(), sa.end()));

    if (!found)
    {
        cout << "NO";
        return 0;
    }

    cout << "YES\n";
    cout << bestX << ' ' << bestY;

    return 0;
}