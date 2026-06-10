#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<int> ans;

    for (int b = 2; b <= 36; b++)
    {
        vector<int> a;

        long long x = n;

        while (x > 0)
        {
            a.push_back(x % b);
            x /= b;
        }

        bool ok = true;

        for (int i = 0; i < a.size() / 2; i++)
        {
            if (a[i] != a[a.size() - i - 1])
            {
                ok = false;
                break;
            }
        }

        if (ok)
        {
            ans.push_back(b);
        }
    }

    if (ans.size() == 0)
    {
        cout << "none";
    }
    else if (ans.size() == 1)
    {
        cout << "unique\n";
        cout << ans[0];
    }
    else
    {
        cout << "multiple\n";

        for (int i = 0; i < ans.size(); i++)
        {
            if (i)
            {
                cout << ' ';
            }

            cout << ans[i];
        }
    }
}