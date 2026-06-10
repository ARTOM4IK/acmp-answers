#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int h;

        cin >> h;

        if (h <= 437)
        {
            cout << "Crash " << i;
            return 0;
        }
    }

    cout << "No crash";

    return 0;
}