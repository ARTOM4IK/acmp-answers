#include <iostream>

using namespace std;

int main(void)
{
    int x;

    int mx1 = -1;
    int mx2 = -1;

    do
    {
        cin >> x;

        if (x != 0)
        {
            if (x > mx1)
            {
                mx2 = mx1;
                mx1 = x;
            }
            else if (x > mx2)
            {
                mx2 = x;
            }
        }
    }
    while (x != 0);

    cout << mx2;

    return 0;
}