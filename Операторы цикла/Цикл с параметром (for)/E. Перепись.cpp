#include <iostream>

using namespace std;

int main(void)
{
    int n;

    cin >> n;

    int maxAge = -1;
    int answer = -1;

    for (int i = 1; i <= n; i++)
    {
        int v, s;

        cin >> v >> s;

        if (s == 1 && v > maxAge)
        {
            maxAge = v;
            answer = i;
        }
    }

    cout << answer;

    return 0;
}