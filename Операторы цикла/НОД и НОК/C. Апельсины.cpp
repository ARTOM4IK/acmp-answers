#include <iostream>

using namespace std;

int main(void)
{
    long long n, m;

    cin >> n >> m;

    long long a = n;
    long long b = m;

    while (b != 0)
    {
        long long t = a % b;

        a = b;
        b = t;
    }

    cout << n / a;

    return 0;
}