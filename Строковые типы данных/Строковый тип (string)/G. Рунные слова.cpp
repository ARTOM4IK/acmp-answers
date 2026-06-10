#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<int> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        if (!dp[i])
            continue;

        if (!(s[i] >= 'A' && s[i] <= 'Z'))
            continue;

        for (int len = 2; len <= 4; len++)
        {
            if (i + len > n)
                continue;

            bool ok = true;

            for (int j = i + 1; j < i + len; j++)
            {
                if (!(s[j] >= 'a' && s[j] <= 'z'))
                {
                    ok = false;
                    break;
                }
            }

            if (ok)
                dp[i + len] = 1;
        }
    }

    if (dp[n])
        cout << "Yes";
    else
        cout << "No";

    return 0;
}