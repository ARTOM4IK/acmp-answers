#include <iostream>

using namespace std;

long long A;
long long K;
long long B;
long long M;
long long X;

bool check(long long days)
{
    long long d1 = days - days / K;
    long long d2 = days - days / M;

    __int128 wood = (__int128)d1 * A + (__int128)d2 * B;

    return wood >= X;
}

int main(void)
{
    cin >> A >> K >> B >> M >> X;

    long long l = 0;
    long long r = 1000000000000000000LL;

    while (l + 1 < r)
    {
        long long m = (l + r) / 2;

        if (check(m))
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }

    cout << r;

    return 0;
}