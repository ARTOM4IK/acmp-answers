#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int cnt = 0;

    do
    {
        cin >> x;

        if (x != 0)
        {
            cnt++;
        }
    }
    while (x != 0);

    cout << cnt;

    return 0;
}