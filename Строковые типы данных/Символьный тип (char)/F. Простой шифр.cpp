#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (s[i] == 'z')
        {
            s[i] = 'a';
        }
        else
        {
            s[i]++;
        }
    }

    cout << s;

    return 0;
}