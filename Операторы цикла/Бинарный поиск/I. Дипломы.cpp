#include <iostream>

using namespace std;

unsigned long long w;
unsigned long long h;
unsigned long long n;

bool check(unsigned long long s)
{
    return (s / w) * (s / h) >= n;
}

int main(void)
{
    cin >> w >> h >> n;

    unsigned long long l = 0;
    unsigned long long r = 1;

    while (!check(r))
    {
        r *= 2;
    }

    while (l + 1 < r)
    {
        unsigned long long m = (l + r) / 2;

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