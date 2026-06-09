#include <iostream>
#include <vector>

using namespace std;

int main(void)
{
    int N;

    cin >> N;

    vector<vector<int>> A(N, vector<int>(N));

    int value = 1;

    for (int sum = 0; sum <= 2 * N - 2; sum++)
    {
        vector<pair<int, int>> cells;

        for (int i = 0; i < N; i++)
        {
            int j = sum - i;

            if (j >= 0 && j < N)
            {
                cells.push_back({i, j});
            }
        }

        if (sum % 2 == 0)
        {
            for (int k = 0; k < (int)cells.size(); k++)
            {
                A[cells[k].first][cells[k].second] = value++;
            }
        }
        else
        {
            for (int k = (int)cells.size() - 1; k >= 0; k--)
            {
                A[cells[k].first][cells[k].second] = value++;
            }
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