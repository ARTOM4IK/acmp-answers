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

    vector<int> pos;

    for (int i = 1; i + 1 < a.size(); i++)
    {
        if (a[i] > a[i - 1] && a[i] > a[i + 1])
        {
            pos.push_back(i);
        }
    }

    if (pos.size() < 2)
    {
        cout << 0;
        return 0;
    }

    int ans = pos[1] - pos[0];

    for (int i = 1; i < pos.size(); i++)
    {
        ans = min(ans, pos[i] - pos[i - 1]);
    }

    cout << ans;

    return 0;
}