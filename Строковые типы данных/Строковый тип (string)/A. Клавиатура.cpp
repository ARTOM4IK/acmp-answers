#include <iostream>
using namespace std;

int main()
{
    char c;
    cin >> c;

    string s = "qwertyuiopasdfghjklzxcvbnm";

    for (int i = 0; i < 26; i++)
    {
        if (s[i] == c)
        {
            cout << s[(i + 1) % 26];
            break;
        }
    }

    return 0;
}