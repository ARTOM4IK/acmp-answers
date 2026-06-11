#include <iostream>
#include <vector>
#include <map>

using namespace std;

vector<unsigned long long> fib;
map<pair<unsigned long long, int>, long long> dp;

long long solve(unsigned long long x, int pos)
{
    if (x == 1)
    {
        return 1;
    }

    pair<unsigned long long, int> state = {x, pos};

    if (dp.count(state))
    {
        return dp[state];
    }

    long long res = 0;

    for (int i = pos; i < (int)fib.size(); i++)
    {
        if (fib[i] > x)
        {
            break;
        }

        if (x % fib[i] == 0)
        {
            res += solve(x / fib[i], i);
        }
    }

    return dp[state] = res;
}

int main()
{
    unsigned long long a = 1;
    unsigned long long b = 1;

    while (true)
    {
        unsigned long long c = a + b;

        if (c > 1000000000000000000ULL)
        {
            break;
        }

        if (c > 1)
        {
            fib.push_back(c);
        }

        a = b;
        b = c;
    }

    int t;
    cin >> t;

    while (t--)
    {
        unsigned long long n;
        cin >> n;

        dp.clear();

        cout << solve(n, 0) << '\n';
    }

    return 0;
}