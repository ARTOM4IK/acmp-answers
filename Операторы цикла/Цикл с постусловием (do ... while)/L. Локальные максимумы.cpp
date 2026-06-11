#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int> a;
    int x;

    while (cin >> x && x != 0)
    {
        a.push_back(x);
    }

    int ans = 0;

    for (int i = 1; i + 1 < a.size(); i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            ans++;
        }
    }

    cout << ans;

    return 0;
}