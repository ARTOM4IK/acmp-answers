#include <iostream>

using namespace std;

int main(void)
{
    double x, y;

    cin >> x >> y;

    int day = 1;

    while (x + 1e-9 < y)
    {
        x *= 1.15;
        day++;
    }

    cout << day;

    return 0;
}