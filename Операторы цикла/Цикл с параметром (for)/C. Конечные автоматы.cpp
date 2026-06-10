#include <iostream>

using namespace std;

int main(void)
{
    int k;

    cin >> k;

    for (int i = 0; i < k; i++)
    {
        long long n, m;

        cin >> n >> m;

        long long d = 19 * m + (n + 239) * (n + 366) / 2;

        cout << d;

        if (i != k - 1)
        {
            cout << endl;
        }
    }

    return 0;
}