#include <iostream>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;

    long long f1 = 1;
    long long f2 = 1;

    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1;
        return 0;
    }

    int pos = 2;

    while (f2 < n)
    {
        long long f3 = f1 + f2;

        f1 = f2;
        f2 = f3;

        pos++;
    }

    if (f2 == n)
    {
        cout << 1 << endl;
        cout << pos;
    }
    else
    {
        cout << 0;
    }

    return 0;
}