#include <iostream>
#include <iomanip>
using namespace std;

double f(double x, long long a, long long b, long long c, long long d)
{
    return a * x * x * x + b * x * x + c * x + d;
}

int main()
{
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    double l = -10000.0;
    double r = 10000.0;

    if (f(l, a, b, c, d) > f(r, a, b, c, d))
    {
        swap(l, r);
    }

    for (int i = 0; i < 200; i++)
    {
        double m = (l + r) / 2.0;

        if (f(m, a, b, c, d) < 0)
        {
            l = m;
        }
        else
        {
            r = m;
        }
    }

    cout << fixed << setprecision(10) << (l + r) / 2.0;

    return 0;
}