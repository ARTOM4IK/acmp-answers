#include <iostream>

using namespace std;

int main(void)
{
    long long n;
    long long x;
    long long y;

    cin >> n >> x >> y;

    if (n == 1)
    {
        cout << min(x, y);
        return 0;
    }

    long long l = 0;
    long long r = 2000000000;

    long long first = min(x, y);

    while (l + 1 < r)
    {
        long long m = (l + r) / 2;

        long long cnt = m / x + m / y;

        if (cnt >= n - 1)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    cout << first + r;

    return 0;
}