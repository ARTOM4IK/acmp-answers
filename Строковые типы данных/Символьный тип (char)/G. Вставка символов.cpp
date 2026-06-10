#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    for (int i = 0; i < (int)s.size(); i++)
    {
        if (i > 0)
        {
            cout << '#';
        }

        cout << s[i];
    }

    return 0;
}