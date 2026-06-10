#include <iostream>

using namespace std;

int main(void)
{
    int x;
    int sum = 0;
    int cnt = 0;

    do
    {
        cin >> x;

        if (x != 0)
        {
            sum += x;
            cnt++;
        }
    }
    while (x != 0);

    cout << (double)sum / cnt;

    return 0;
}