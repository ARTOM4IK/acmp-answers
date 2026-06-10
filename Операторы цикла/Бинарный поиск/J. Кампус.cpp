#include <iostream>

using namespace std;

unsigned long long n;
unsigned long long k;
unsigned long long x;
unsigned long long y;

unsigned long long rooms_on_floor(unsigned long long floor)
{
    if (floor % k == 0)
    {
        return x;
    }

    return y;
}

unsigned long long prefix(unsigned long long floor)
{
    unsigned long long cnt_k = floor / k;
    unsigned long long cnt_other = floor - cnt_k;

    return cnt_k * x + cnt_other * y;
}

int main(void)
{
    cin >> n >> k >> x >> y;

    unsigned long long q;
    cin >> q;

    unsigned long long rooms_in_entrance =
        (n - n / k) * y +
        (n / k) * x;

    for (unsigned long long i = 0; i < q; i++)
    {
        unsigned long long room;
        cin >> room;

        unsigned long long inside =
            (room - 1) % rooms_in_entrance + 1;

        unsigned long long l = 1;
        unsigned long long r = n;

        while (l < r)
        {
            unsigned long long m = (l + r) / 2;

            if (prefix(m) >= inside)
            {
                r = m;
            }
            else
            {
                l = m + 1;
            }
        }

        cout << l << "\n";
    }

    return 0;
}