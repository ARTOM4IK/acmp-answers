#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    int M;
    int K;

    cin >> N >> M >> K;

    vector<vector<int>> A(N, vector<int>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    K %= 4;

    for (int turn = 0; turn < K; turn++)
    {
        vector<vector<int>> B(M, vector<int>(N));

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                B[j][N - 1 - i] = A[i][j];
            }
        }

        A = B;

        int temp = N;
        N = M;
        M = temp;
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (j > 0)
            {
                cout << ' ';
            }

            cout << A[i][j];
        }

        cout << '\n';
    }

    return 0;
}