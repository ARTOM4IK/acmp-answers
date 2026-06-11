#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Pipe
{
    __int128 mass;
    int pos;
    string text;
};

int main(void)
{
    int n;

    cin >> n;

    vector<Pipe> a(n);

    for (int i = 0; i < n; i++)
    {
        long long value;
        string unit;

        cin >> value >> unit;

        a[i].pos = i;
        a[i].text = to_string(value) + " " + unit;

        char base;

        if (unit.size() == 1)
        {
            base = unit[0];
        }
        else
        {
            base = unit[1];
        }

        __int128 coef;

        if (base == 'g')
        {
            coef = 1000;
        }
        else if (base == 'p')
        {
            coef = 16380000;
        }
        else
        {
            coef = 1000000000LL;
        }

        if (unit.size() == 2)
        {
            if (unit[0] == 'm')
            {
                coef /= 1000;
            }
            else if (unit[0] == 'k')
            {
                coef *= 1000;
            }
            else if (unit[0] == 'M')
            {
                coef *= 1000000;
            }
            else if (unit[0] == 'G')
            {
                coef *= 1000000000LL;
            }
        }

        a[i].mass = (__int128)value * coef;
    }

    sort(a.begin(), a.end(),
    [](const Pipe& x, const Pipe& y)
    {
        if (x.mass != y.mass)
        {
            return x.mass < y.mass;
        }

        return x.pos < y.pos;
    });

    for (int i = 0; i < n; i++)
    {
        cout << a[i].text << "\n";
    }

    return 0;
}