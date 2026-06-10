#include <iostream>

using namespace std;

int main(void)
{
    int prev;
    int cur;

    cin >> prev;

    int inc = 1;
    int dec = 1;
    int ans = 1;

    do
    {
        cin >> cur;

        if (cur != 0)
        {
            if (cur > prev)
            {
                inc++;
                dec = 1;
            }
            else if (cur < prev)
            {
                dec++;
                inc = 1;
            }
            else
            {
                inc = 1;
                dec = 1;
            }

            if (inc > ans)
            {
                ans = inc;
            }

            if (dec > ans)
            {
                ans = dec;
            }

            prev = cur;
        }
    }
    while (cur != 0);

    cout << ans;

    return 0;
}