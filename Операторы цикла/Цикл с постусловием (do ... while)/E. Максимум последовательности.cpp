#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int mx = 0;

    do
    {
        cin >> x;

        if (x > mx)
        {
            mx = x;
        }
    }
    while (x != 0);

    cout << mx;

    return 0;
}