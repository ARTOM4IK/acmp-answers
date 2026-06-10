#include <iostream>

using namespace std;

unsigned long long n;
unsigned long long a;
unsigned long long b;
unsigned long long w;
unsigned long long h;

bool check(unsigned long long d)
{
    unsigned long long x = w / (a + 2 * d);
    unsigned long long y = h / (b + 2 * d);

    if (x * y >= n)
    {
        return true;
    }

    x = w / (b + 2 * d);
    y = h / (a + 2 * d);

    return x * y >= n;
}

int main(void)
{
    cin >> n >> a >> b >> w >> h;

    unsigned long long l = 0;
    unsigned long long r = 1000000000000000000ULL;

    while (l + 1 < r)
    {
        unsigned long long m = (l + r) / 2;

        if (check(m))
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    cout << l;

    return 0;
}