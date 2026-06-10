#include <iostream>
#include <string>

using namespace std;

bool vowel(char c)
{
    return c == 'a' ||
           c == 'e' ||
           c == 'i' ||
           c == 'o' ||
           c == 'u' ||
           c == 'y';
}

int main(void)
{
    string s;

    cin >> s;

    int ans = 0;
    int len = 1;

    for (int i = 1; i < (int)s.size(); i++)
    {
        if (vowel(s[i]) == vowel(s[i - 1]))
        {
            len++;
        }
        else
        {
            ans += (len - 1) / 2;
            len = 1;
        }
    }

    ans += (len - 1) / 2;

    cout << ans;

    return 0;
}