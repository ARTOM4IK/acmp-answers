#include <iostream>
#include <string>

using namespace std;

int main()
{
    string s;
    getline(cin, s);

    int mx = -1;

    for (int i = 0; i < s.size(); i++)
    {
        char c = s[i];

        if ('0' <= c && c <= '9')
        {
            mx = max(mx, c - '0');
        }
        else if ('A' <= c && c <= 'Z')
        {
            mx = max(mx, c - 'A' + 10);
        }
        else
        {
            cout << -1;
            return 0;
        }
    }

    cout << max(2, mx + 1);
}