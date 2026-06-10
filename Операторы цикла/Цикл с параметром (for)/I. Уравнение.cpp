#include <iostream>

using namespace std;

int main(void)
{
    long long a, b, c, d;

    cin >> a >> b >> c >> d;

    bool first = true;

    for (int x = -100; x <= 100; x++)
    {
        long long y = a * x * x * x + b * x * x + c * x + d;

        if (y == 0)
        {
            if (!first)
            {
                cout << " ";
            }

            cout << x;
            first = false;
        }
    }

    return 0;
}