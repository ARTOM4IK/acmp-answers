#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    int ans = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '0' || s[i] == '6' || s[i] == '9')
        {
            ans++;
        }
        else if (s[i] == '8')
        {
            ans += 2;
        }
    }

    cout << ans;

    return 0;
}