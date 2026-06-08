#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int M;

    cin >> N >> M;

    vector<int> A(N);
    vector<int> B(M);

    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < M; i++)
    {
        cin >> B[i];
    }

    sort(A.begin(), A.end());
    sort(B.begin(), B.end());

    int i = 0;
    int j = 0;

    bool first = true;

    while (i < N && j < M)
    {
        if (A[i] == B[j])
        {
            if (!first)
            {
                cout << ' ';
            }

            cout << A[i];
            first = false;

            int value = A[i];

            while (i < N && A[i] == value)
            {
                i++;
            }

            while (j < M && B[j] == value)
            {
                j++;
            }
        }
        else if (A[i] < B[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }

    return 0;
}