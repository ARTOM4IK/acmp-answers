#include <iostream>

using namespace std;

int main(void)
{
    int prev;
    int cur;
    int cnt = 0;

    cin >> prev;

    do
    {
        cin >> cur;

        if (cur != 0)
        {
            if (cur > prev)
            {
                cnt++;
            }

            prev = cur;
        }
    }
    while (cur != 0);

    cout << cnt;

    return 0;
}