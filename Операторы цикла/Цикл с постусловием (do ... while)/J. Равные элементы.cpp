#include <iostream>

using namespace std;

int main(void)
{
    int prev;
    int cur;

    cin >> prev;

    int curLen = 1;
    int maxLen = 1;

    do
    {
        cin >> cur;

        if (cur != 0)
        {
            if (cur == prev)
            {
                curLen++;
            }
            else
            {
                curLen = 1;
            }

            if (curLen > maxLen)
            {
                maxLen = curLen;
            }

            prev = cur;
        }
    }
    while (cur != 0);

    cout << maxLen;

    return 0;
}