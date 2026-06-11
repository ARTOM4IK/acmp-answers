#include <iostream>

using namespace std;

int main()
{
    int x;
    int prev = -1;
    int sum = 0;

    while (cin >> x)
    {
        if (prev == 0 && x == 0)
        {
            break;
        }

        sum += x;
        prev = x;
    }

    cout << sum;

    return 0;
}