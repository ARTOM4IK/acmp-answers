#include <iostream>
#include <string>

using namespace std;

int main()
{
    long long x;
    cin >> x;

    if (x == 0)
    {
        cout << 0;
        return 0;
    }

    string ans = "";

    while (x != 0)
    {
        long long r = x % (-3);
        x /= -3;

        if (r < 0)
        {
            r += 3;
            x++;
        }

        ans = char('0' + r) + ans;
    }

    cout << ans;
}