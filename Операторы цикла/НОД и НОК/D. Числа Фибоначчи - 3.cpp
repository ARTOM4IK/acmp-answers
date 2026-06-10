#include <iostream>

using namespace std;

const long long MOD = 1000000000;

pair<long long, long long> fib(long long n)
{
    if (n == 0)
    {
        return {0, 1};
    }

    pair<long long, long long> p = fib(n / 2);

    long long a = p.first;
    long long b = p.second;

    long long c = (a * ((2 * b % MOD - a + MOD) % MOD)) % MOD;
    long long d = (a * a % MOD + b * b % MOD) % MOD;

    if (n % 2 == 0)
    {
        return {c, d};
    }
    else
    {
        return {d, (c + d) % MOD};
    }
}

int main(void)
{
    long long i, j;

    cin >> i >> j;

    while (j != 0)
    {
        long long t = i % j;

        i = j;
        j = t;
    }

    cout << fib(i).first;

    return 0;
}