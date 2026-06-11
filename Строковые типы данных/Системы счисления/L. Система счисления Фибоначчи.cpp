#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    string a, b;

    cin >> a >> b;

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    vector<int> s(600, 0);

    for (int i = 0; i < (int)a.size(); i++)
    {
        s[i] += a[i] - '0';
    }

    for (int i = 0; i < (int)b.size(); i++)
    {
        s[i] += b[i] - '0';
    }

    bool changed = true;

    while (changed)
    {
        changed = false;

        for (int i = 0; i < 590; i++)
        {
            if (s[i] >= 2)
            {
                changed = true;

                if (i == 0)
                {
                    s[0] -= 2;
                    s[1] += 1;
                }
                else if (i == 1)
                {
                    s[1] -= 2;
                    s[2] += 1;
                    s[0] += 1;
                }
                else
                {
                    s[i] -= 2;
                    s[i + 1] += 1;
                    s[i - 2] += 1;
                }
            }
        }

        for (int i = 0; i < 590; i++)
        {
            if (s[i] > 0 && s[i + 1] > 0)
            {
                changed = true;

                s[i]--;
                s[i + 1]--;
                s[i + 2]++;
            }
        }
    }

    int pos = 599;

    while (pos > 0 && s[pos] == 0)
    {
        pos--;
    }

    for (int i = pos; i >= 0; i--)
    {
        cout << s[i];
    }

    return 0;
}