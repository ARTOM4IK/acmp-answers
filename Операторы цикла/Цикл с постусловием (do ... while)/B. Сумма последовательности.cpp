#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int sum = 0;

    do
    {
        cin >> x;

        if (x != 0)
        {
            sum += x;
        }
    }
    while (x != 0);

    cout << sum;

    return 0;
}