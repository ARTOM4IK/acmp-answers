#include <iostream>

using namespace std;

int main(void)
{
    long long x, p, y;

    cin >> x >> p >> y;

    long long money = x * 100;
    long long target = y * 100;

    int years = 0;

    while (money < target)
    {
        money = money * (100 + p) / 100;
        years++;
    }

    cout << years;

    return 0;
}