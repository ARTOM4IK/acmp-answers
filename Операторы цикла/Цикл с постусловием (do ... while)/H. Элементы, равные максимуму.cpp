#include <iostream>

using namespace std;

int main(void)
{
    int x;

    int mx = 0;
    int cnt = 0;

    do
    {
        cin >> x;

        if (x != 0)
        {
            if (x > mx)
            {
                mx = x;
                cnt = 1;
            }
            else if (x == mx)
            {
                cnt++;
            }
        }
    }
    while (x != 0);

    cout << cnt;

    return 0;
}