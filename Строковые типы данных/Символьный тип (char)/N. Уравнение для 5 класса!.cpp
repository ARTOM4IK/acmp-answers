#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    string s;

    cin >> s;

    char op = s[1];

    if (s[0] == 'x')
    {
        int b = s[2] - '0';
        int c = s[4] - '0';

        if (op == '+')
        {
            cout << c - b;
        }
        else
        {
            cout << c + b;
        }
    }
    else if (s[2] == 'x')
    {
        int a = s[0] - '0';
        int c = s[4] - '0';

        if (op == '+')
        {
            cout << c - a;
        }
        else
        {
            cout << a - c;
        }
    }
    else
    {
        int a = s[0] - '0';
        int b = s[2] - '0';

        if (op == '+')
        {
            cout << a + b;
        }
        else
        {
            cout << a - b;
        }
    }

    return 0;
}