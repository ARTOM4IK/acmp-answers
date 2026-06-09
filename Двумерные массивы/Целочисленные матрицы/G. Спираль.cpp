#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;

    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));

    int top = 0;
    int bottom = N - 1;
    int left = 0;
    int right = N - 1;

    int value = 1;

    while (top <= bottom && left <= right)
    {
        for (int j = left; j <= right; j++)
        {
            A[top][j] = value++;
        }

        top++;

        for (int i = top; i <= bottom; i++)
        {
            A[i][right] = value++;
        }

        right--;

        if (top <= bottom)
        {
            for (int j = right; j >= left; j--)
            {
                A[bottom][j] = value++;
            }

            bottom--;
        }

        if (left <= right)
        {
            for (int i = bottom; i >= top; i--)
            {
                A[i][left] = value++;
            }

            left++;
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << A[i][j] << ' ';
        }

        cout << '\n';
    }

    return 0;
}