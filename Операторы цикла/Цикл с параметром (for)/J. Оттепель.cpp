#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int cur = 0;
    int mx = 0;

    for (int i = 0; i < n; i++)
    {
        int t;

        cin >> t;

        if (t > 0)
        {
            cur++;

            if (cur > mx)
            {
                mx = cur;
            }
        }
        else
        {
            cur = 0;
        }
    }

    cout << mx;

    return 0;
}