#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0;

    for (int i = 0; i + 4 < (int)s.size(); i++)
    {
        if (s.substr(i, 5) == ">>-->")
            ans++;

        if (s.substr(i, 5) == "<--<<")
            ans++;
    }

    cout << ans;

    return 0;
}