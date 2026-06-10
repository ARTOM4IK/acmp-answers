#include <iostream>

using namespace std;

int main(void)
{
    long long n;

    cin >> n;

    bool first = true;

    for (long long i = 1; i * i <= n; i++)
    {
        if (!first)
        {
            cout << " ";
        }

        cout << i * i;

        first = false;
    }

    return 0;
}