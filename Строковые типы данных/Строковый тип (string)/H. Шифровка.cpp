#include <iostream>
using namespace std;

int main()
{
    string s, need;

    cin >> s;
    cin >> need;

    for (int k = 0; k < 26; k++)
    {
        string t = s;

        for (int i = 0; i < (int)t.size(); i++)
        {
            t[i] = char((t[i] - 'A' - k + 26) % 26 + 'A');
        }

        if (t.find(need) != string::npos)
        {
            cout << t;
            return 0;
        }
    }

    cout << "IMPOSSIBLE";

    return 0;
}