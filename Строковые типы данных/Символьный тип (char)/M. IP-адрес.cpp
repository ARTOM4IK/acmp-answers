#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    int dots = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '.')
        {
            dots++;
        }
    }

    if (dots != 3)
    {
        cout << "Bad";
        return 0;
    }

    string cur;
    int cnt = 0;

    for (int i = 0; i <= (int)s.size(); i++)
    {
        if (i == (int)s.size() || s[i] == '.')
        {
            if (cur.empty())
            {
                cout << "Bad";
                return 0;
            }

            long long value = 0;

            for (int j = 0; j < (int)cur.size(); j++)
            {
                value = value * 10 + cur[j] - '0';

                if (value > 255)
                {
                    cout << "Bad";
                    return 0;
                }
            }

            cnt++;
            cur.clear();
        }
        else
        {
            cur += s[i];
        }
    }

    if (cnt == 4)
    {
        cout << "Good";
    }
    else
    {
        cout << "Bad";
    }

    return 0;
}