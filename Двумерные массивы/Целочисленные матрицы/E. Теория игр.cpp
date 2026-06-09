#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;
    int M;

    cin >> N >> M;

    vector<vector<int>> A(N, vector<int>(M));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }

    int lowerValue = -1000000;

    for (int i = 0; i < N; i++)
    {
        int rowMin = A[i][0];

        for (int j = 1; j < M; j++)
        {
            if (A[i][j] < rowMin)
            {
                rowMin = A[i][j];
            }
        }

        if (rowMin > lowerValue)
        {
            lowerValue = rowMin;
        }
    }

    int upperValue = 1000000;

    for (int j = 0; j < M; j++)
    {
        int colMax = A[0][j];

        for (int i = 1; i < N; i++)
        {
            if (A[i][j] > colMax)
            {
                colMax = A[i][j];
            }
        }

        if (colMax < upperValue)
        {
            upperValue = colMax;
        }
    }

    cout << lowerValue << ' ' << upperValue;

    return 0;
}