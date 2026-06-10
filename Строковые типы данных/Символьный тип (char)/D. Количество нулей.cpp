#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    int cnt = 0;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == '0')
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}