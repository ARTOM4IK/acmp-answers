#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    bool small = false;
    bool big = false;
    bool digit = false;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            small = true;
        }

        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            big = true;
        }

        if (s[i] >= '0' && s[i] <= '9')
        {
            digit = true;
        }
    }

    if ((int)s.size() >= 12 && small && big && digit)
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }

    return 0;
}