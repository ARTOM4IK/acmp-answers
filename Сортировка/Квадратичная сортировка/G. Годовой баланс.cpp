#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

long long MakeMaximum(long long x)
{
    bool negative = (x < 0);

    string s = to_string(llabs(x));

    if (!negative)
    {
        sort(s.begin(), s.end(), greater<char>());
    }
    else
    {
        sort(s.begin(), s.end());

        if (s[0] == '0')
        {
            for (int i = 1; i < (int)s.size(); i++)
            {
                if (s[i] != '0')
                {
                    swap(s[0], s[i]);
                    break;
                }
            }
        }
    }

    long long value = stoll(s);

    if (negative)
    {
        value = -value;
    }

    return value;
}

long long MakeMinimum(long long x)
{
    bool negative = (x < 0);

    string s = to_string(llabs(x));

    if (!negative)
    {
        sort(s.begin(), s.end());

        if (s[0] == '0')
        {
            for (int i = 1; i < (int)s.size(); i++)
            {
                if (s[i] != '0')
                {
                    swap(s[0], s[i]);
                    break;
                }
            }
        }
    }
    else
    {
        sort(s.begin(), s.end(), greater<char>());
    }

    long long value = stoll(s);

    if (negative)
    {
        value = -value;
    }

    return value;
}

int main(void)
{
    long long a;
    long long b;

    cin >> a >> b;

    cout << MakeMaximum(a) - MakeMinimum(b);

    return 0;
}