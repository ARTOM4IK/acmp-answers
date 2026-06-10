#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    string e = "2.7182818284590452353602875";

    if (n == 0)
    {
        if (e[2] >= '5')
            cout << 3;
        else
            cout << 2;

        return 0;
    }

    string s = e.substr(0, n + 2);

    if (n + 2 < (int)e.size() && e[n + 2] >= '5')
    {
        int i = s.size() - 1;

        while (i >= 0)
        {
            if (s[i] == '.')
            {
                i--;
                continue;
            }

            if (s[i] < '9')
            {
                s[i]++;
                break;
            }

            s[i] = '0';
            i--;
        }

        if (i < 0)
            s = "1" + s;
    }

    cout << s;

    return 0;
}