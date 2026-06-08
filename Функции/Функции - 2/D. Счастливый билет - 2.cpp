#include <iostream>
#include <string>

using namespace std;

int Root( int x )
{
    if (x == 0)
    {
        return 0;
    }

    int r = x % 9;

    if (r == 0)
    {
        return 9;
    }

    return r;
}

int main( void )
{
    string s;

    cin >> s;

    int n = s.size();

    int pref[101];

    pref[0] = 0;

    for (int i = 0; i < n; i++)
    {
        pref[i + 1] = pref[i] + (s[i] - '0');
    }

    int total = pref[n];

    for (int cut = 1; cut < n; cut++)
    {
        int leftSum = pref[cut];
        int rightSum = total - leftSum;

        if (Root(leftSum) == Root(rightSum))
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";

    return 0;
}