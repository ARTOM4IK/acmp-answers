#include <iostream>
using namespace std;

int main()
{
    long long l = 1;
    long long r = 1000000000;

    while (l <= r)
    {
        long long m = (l + r) / 2;

        cout << m << endl;
        cout.flush();

        char c;
        cin >> c;

        if (c == '=')
        {
            return 0;
        }

        if (c == '<')
        {
            r = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }

    return 0;
}