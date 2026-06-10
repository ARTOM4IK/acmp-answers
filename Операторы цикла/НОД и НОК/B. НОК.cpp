#include <iostream>

using namespace std;

int main(void)
{
    long long a, b;

    cin >> a >> b;

    long long x = a;
    long long y = b;

    while (y != 0)
    {
        long long t = x % y;

        x = y;
        y = t;
    }

    cout << a / x * b;

    return 0;
}