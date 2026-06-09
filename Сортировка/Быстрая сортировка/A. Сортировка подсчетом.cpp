#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    cin >> N;

    vector<int> cnt(201, 0);

    for (int i = 0; i < N; i++)
    {
        int x;

        cin >> x;

        cnt[x + 100]++;
    }

    string answer;

    for (int value = -100; value <= 100; value++)
    {
        while (cnt[value + 100] > 0)
        {
            answer += to_string(value);
            answer += ' ';

            cnt[value + 100]--;
        }
    }

    if (!answer.empty())
    {
        answer.pop_back();
    }

    cout << answer;

    return 0;
}