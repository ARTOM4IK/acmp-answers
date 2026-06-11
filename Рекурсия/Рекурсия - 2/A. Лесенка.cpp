#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    long long dp[101] = {};

    dp[0] = 1;

    for (int x = 1; x <= n; x++)
    {
        for (int s = n; s >= x; s--)
        {
            dp[s] += dp[s - x];
        }
    }

    cout << dp[n];

    return 0;
}