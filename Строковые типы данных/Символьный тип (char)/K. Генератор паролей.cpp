#include <iostream>
#include <string>

using namespace std;

int main(void)
{
    int N;
    int A;
    int B;
    int C;

    cin >> N;
    cin >> A >> B >> C;

    string ans;

    for (int i = 0; i < A; i++)
    {
        ans += (char)('A' + i % 26);
    }

    for (int i = 0; i < B; i++)
    {
        ans += (char)('a' + i % 26);
    }

    for (int i = 0; i < C; i++)
    {
        ans += (char)('0' + i % 10);
    }

    int pos = 0;

    while ((int)ans.size() < N)
    {
        if (pos % 3 == 0)
        {
            ans += (char)('A' + pos % 26);
        }
        else if (pos % 3 == 1)
        {
            ans += (char)('a' + pos % 26);
        }
        else
        {
            ans += (char)('0' + pos % 10);
        }

        pos++;
    }

    for (int i = 1; i < (int)ans.size(); i++)
    {
        if (ans[i] == ans[i - 1])
        {
            ans[i] = 'Z';
        }
    }

    cout << ans;

    return 0;
}