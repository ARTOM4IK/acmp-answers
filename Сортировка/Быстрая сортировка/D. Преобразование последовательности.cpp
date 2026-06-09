#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main(void)
{
    int N;

    cin >> N;

    vector<int> A(N);

    unordered_map<int, int> cnt;

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];

        cnt[A[i]]++;
    }

    int bestNumber = A[0];
    int bestCount = cnt[A[0]];

    for (auto p : cnt)
    {
        if (p.second > bestCount)
        {
            bestCount = p.second;
            bestNumber = p.first;
        }
        else if (p.second == bestCount &&
                 p.first < bestNumber)
        {
            bestNumber = p.first;
        }
    }

    bool first = true;

    for (int i = 0; i < N; i++)
    {
        if (A[i] != bestNumber)
        {
            if (!first)
            {
                cout << ' ';
            }

            cout << A[i];

            first = false;
        }
    }

    for (int i = 0; i < N; i++)
    {
        if (A[i] == bestNumber)
        {
            if (!first)
            {
                cout << ' ';
            }

            cout << A[i];

            first = false;
        }
    }

    return 0;
}