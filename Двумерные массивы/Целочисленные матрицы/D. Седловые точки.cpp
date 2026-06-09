#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int N;
    int M;

    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));
    vector<int> rowMin(N, 1000000);
    vector<int> colMax(M, -1000000);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];

            if (A[i][j] < rowMin[i])
            {
                rowMin[i] = A[i][j];
            }

            if (A[i][j] > colMax[j])
            {
                colMax[j] = A[i][j];
            }
        }
    }

    int answer = 0;

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            if (A[i][j] == rowMin[i] &&
                A[i][j] == colMax[j])
            {
                answer++;
            }
        }
    }

    cout << answer;

    return 0;
}