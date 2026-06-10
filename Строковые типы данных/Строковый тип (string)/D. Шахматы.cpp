#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    if (s.size() != 5 || s[2] != '-')
    {
        cout << "ERROR";
        return 0;
    }

    char c1 = s[0];
    char r1 = s[1];
    char c2 = s[3];
    char r2 = s[4];

    if (c1 < 'A' || c1 > 'H' ||
        c2 < 'A' || c2 > 'H' ||
        r1 < '1' || r1 > '8' ||
        r2 < '1' || r2 > '8')
    {
        cout << "ERROR";
        return 0;
    }

    int dx = abs(c1 - c2);
    int dy = abs(r1 - r2);

    if ((dx == 1 && dy == 2) || (dx == 2 && dy == 1))
        cout << "YES";
    else
        cout << "NO";

    return 0;
}