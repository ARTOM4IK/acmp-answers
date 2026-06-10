#include <iostream>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;

    long long x = 1;

    bool first = true;

    while (x <= n)
    {
        if (!first)
        {
            cout << " ";
        }

        cout << x;

        x *= 2;
        first = false;
    }

    return 0;
}