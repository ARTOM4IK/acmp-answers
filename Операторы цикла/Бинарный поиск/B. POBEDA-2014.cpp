#include <iostream>
using namespace std;

int main()
{
    long long a1, a2, a3, a4;
    cin >> a1 >> a2 >> a3 >> a4;

    unsigned long long cells =
        min(a1, a2) +
        min(a3, a4);

    unsigned long long l = 0;
    unsigned long long r = 2000000000ULL;

    while (l < r)
    {
        unsigned long long mid = (l + r + 1) / 2;

        __int128 sq = (__int128)mid * mid;

        if (sq <= cells)
        {
            l = mid;
        }
        else
        {
            r = mid - 1;
        }
    }

    cout << l;

    return 0;
}