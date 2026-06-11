#include <iostream>
using namespace std;

long long hilbert(int n, long long x, long long y)
{
    if (n == 0)
    {
        return 0;
    }

    long long h = 1LL << (n - 1);

    if (x <= h && y <= h)
    {
        return hilbert(n - 1, y, x);
    }

    if (x <= h && y > h)
    {
        return 1LL * h * h
             + hilbert(n - 1, x, y - h);
    }

    if (x > h && y > h)
    {
        return 2LL * h * h
             + hilbert(n - 1, x - h, y - h);
    }

    return 3LL * h * h + hilbert(
      n - 1,
      h - y + 1,
      2 * h - x + 1);
}

int main()
{
    int N;
    long long X, Y;

    cin >> N >> X >> Y;

    cout << hilbert(N, X, Y) << '\n';

    return 0;
}