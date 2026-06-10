#include <iostream>

using namespace std;

int main(void)
{
    long long a, b;

    cin >> a >> b;

    while (b != 0)
    {
        long long t = a % b;

        a = b;
        b = t;
    }

    cout << a;

    return 0;
}