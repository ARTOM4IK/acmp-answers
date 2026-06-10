#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    cin >> n;

    if (n == 0)
    {
        cout << 0;
        return 0;
    }

    string s = "";

    while (n > 0)
    {
        s = char('0' + n % 2) + s;
        n /= 2;
    }

    int len = s.size();
    int ans = 0;

    for (int k = 0; k < len; k++)
    {
        int cur = 0;

        for (int i = 0; i < len; i++)
        {
            cur *= 2;
            cur += s[(i - k + len) % len] - '0';
        }

        ans = max(ans, cur);
    }

    cout << ans;
}